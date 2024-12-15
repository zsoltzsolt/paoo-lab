#include "InvestmentFactory.h"
#include "Stock.h"

std::shared_ptr<Investment> createInvestment() {
    return std::make_shared<Stock>("NVIDIA");
} 