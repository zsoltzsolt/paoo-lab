#ifndef STOCK_H
#define STOCK_H

#include "Investment.h"
#include <string>

class Stock : public Investment {
private:
    std::string stockName;
public:
    Stock(const std::string& name);
    void showInvestment();
    ~Stock();
};

#endif