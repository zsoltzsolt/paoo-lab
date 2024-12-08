#include "../inc/FilterNoCopy.h"
#include <iostream>

FilterNoCopy::FilterNoCopy(const std::string& filterType, int filterSize) 
    : type(filterType), size(filterSize) {
    std::cout << "Filter constructor was called!\n";
}

FilterNoCopy::~FilterNoCopy() {
    std::cout << "Filter destructor was called!\n";
}

void FilterNoCopy::apply(Image& img) {
    std::cout << "Applying " << type << " ...\n";
}

const std::string& FilterNoCopy::getType() const {
    return type;
}

int FilterNoCopy::getSize() const {
    return size;
}

void FilterNoCopy::setType(const std::string& newType) {
    type = newType;
}

void FilterNoCopy::setSize(int newSize) {
    size = newSize;
}
