#include "Stock.h"

Stock::Stock(const std::string& name): stockName(name) {
    std::cout << "ctor stock: " << stockName << std::endl;
}

void Stock::showInvestment() {
    std::cout << "invest stock: " << stockName << std::endl;
}

Stock::~Stock() {
    std::cout << "Stock destructor called: " << stockName << std::endl;
}