#include <iostream>
#include "InvestmentFactory.h"
#include "Lock.h"

int main() {
    std::shared_ptr<Investment> pInv = createInvestment();

    std::shared_ptr<Investment> pInv2(pInv);

    pInv->showInvestment();
    pInv2->showInvestment();

    std::mutex m;

    {
        std::cout << "Entering new scope" << std::endl;
        Lock lock(m);
    }

    std::cout << "Exited previous scope" << std::endl;

}