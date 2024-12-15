#ifndef INVESTMENTFACTORY_H
#define INVESTMENTFACTORY_H

#include "Investment.h"
#include <memory>

std::shared_ptr<Investment> createInvestment();

#endif