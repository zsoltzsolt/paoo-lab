#include "Filter.h"
#include <iostream>

Filter::Filter(const std::string& filterType, int filterSize) {
    std::cout << "Filter constructor was called!\n";
    type = filterType;
    size = filterSize;
}

Filter::~Filter() {
    std::cout << "Filter destructor was called for " << this->type  << " and size " << this->size << "!\n";
}

Filter::Filter(const Filter& other){
    std::cout << "Filter copy constructor was called!\n";
    type = other.type;
    size = other.size;
}

Filter::Filter(Filter&& other) {
    std::cout << "Filter move constructor was called!\n";

    type = std::move(other.type);
    size = other.size;
    other.size = 0;
}

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
