#include "../inc/FilterNoCopy.h"
#include <iostream>

void FilterNoCopy::apply(Image& img) {
    if (type == "EdgeDetection") {
        std::cout << "Applying Edge Detection ...\n";
    } else if (type == "Blur") {
        std::cout << "Applying Blur ...\n";
    } else {
        std::cout << "Unknown filter type: " << type << "\n";
    }
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
