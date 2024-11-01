#include "Filter.h"
#include <iostream>

Filter::Filter(const std::string& filterType, int filterSize) : type(filterType), size(filterSize) {}

void Filter::apply(Image& image) {
    if (type == "EdgeDetection") {
        std::cout << "Applying Edge Detection ...\n";
    } else if (type == "Blur") {
        std::cout << "Applying Blur ...\n";
    }
}

const std::string& Filter::getType() {
    return type;
}

int Filter::getSize() {
    return size;
}
