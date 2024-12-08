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
// Copy assignment operator
Filter& Filter::operator=(const Filter& other) {
    std::cout << "Filter copy assignment operator was called!\n";
    if(this != &other) {
        type = other.type;
        size = other.size;
    }
    return *this;
}

void Filter::apply(Image& image) {
    std::cout << "Applying " << type << " ...\n";
}

const std::string& Filter::getType() {
    return type;
}

int Filter::getSize() {
    return size;
}

void Filter::setType(const std::string& newType) {
    type = newType;
}

void Filter::setSize(int newSize) {
    size = newSize;
}
