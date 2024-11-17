#include "../inc/FilterNoCopy.h"
#include <iostream>

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
