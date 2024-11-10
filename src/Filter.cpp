#include "../inc/Filter.h"
#include <iostream>

Filter::Filter(const std::string& filterType, int filterSize) 
    : type(filterType), size(filterSize) {
    std::cout << "Filter constructor was called!\n";
}

Filter::~Filter() {
    std::cout << "Filter destructor was called!\n";
}

Filter::Filter(const Filter& other)
    : type(other.type), size(other.size) {
    std::cout << "Filter copy constructor was called!\n";
}

Filter::Filter(Filter&& other) 
    : type(std::move(other.type)), size(other.size){
    std::cout << "Filter move constructor was called!\n";
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
