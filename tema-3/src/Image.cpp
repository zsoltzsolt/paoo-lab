#include "Image.h"

// ctor
Image::Image(const std::string& name)
    : name(name), width(100), height(100), pixelData(nullptr) {
    pixelData = new int[width * height](); 
}

// copy ctor
Image::Image(const Image& rhs)
    : name(rhs.name), width(rhs.width), height(rhs.height), pixelData(nullptr) {
    if (rhs.pixelData) {
        pixelData = new int[width * height];
        std::copy(rhs.pixelData, rhs.pixelData + width * height, pixelData);
    }
}

// copy assignment operator
Image& Image::operator=(const Image& rhs) {
    if (this == &rhs) return *this; // Item 11: Handle assignment to self in operator=

    delete[] pixelData;  // Item 12: Copy all parts of an object
    name = rhs.name;
    width = rhs.width;
    height = rhs.height;

    if (rhs.pixelData) {
        pixelData = new int[width * height];
        std::copy(rhs.pixelData, rhs.pixelData + width * height, pixelData);
    } else {
        pixelData = nullptr;
    }

    return *this; // Item10: Have assignment operators return a reference to *this
}

// dtor
Image::~Image() {
    delete[] pixelData;
}

void Image::displayInfo() const {
    std::cout << "Image: " << name << ", Dimensions: " << width << "x" << height << '\n';
}
