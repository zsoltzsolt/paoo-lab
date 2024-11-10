#include "../inc/Image.h"
#include <cstring>
#include <iostream>

Image::Image(const std::string& path)
    : width(0), height(0), pixelData(nullptr) {
    std::cout << "Image constructor was called!\n";
    load(path);
}

Image::~Image() {
    std::cout << "Image destructor was called!\n";
    delete[] pixelData;
}

Image::Image(const Image& other) 
    : width(other.width), height(other.height), pixelData(new unsigned char[other.width * other.height]) {
    std::cout << "Image copy constructor was called!\n";
    std::memcpy(pixelData, other.pixelData, width * height);
}

Image::Image(Image&& other) 
    : width(other.width), height(other.height), pixelData(other.pixelData) {
    std::cout << "Image move constructor was called!\n";
    other.pixelData = nullptr;
    other.width = 0;
    other.height = 0;
}

bool Image::load(const std::string& path) {
    std::cout << "Loading image from: " << path << "\n";
    
    static bool seeded = false;
    if (!seeded) {
        std::srand(static_cast<unsigned int>(std::time(0)));
        seeded = true;
    }

    width = 100 + (std::rand() % (1920 - 100 + 1)); // Random width between 100 and 1920
    height = 100 + (std::rand() % (1080 - 100 + 1)); // Random height between 100 and 1920
    pixelData = new unsigned char[width * height];

    return true; 
}

bool Image::save(const std::string& path) {
    std::cout << "Saving image to: " << path << "\n";
    return true;
}

int Image::getWidth() {
    return width;
}

int Image::getHeight() {
    return height;
}

unsigned char* Image::getPixelData() {
    return pixelData;
}



