#include "Image.h"
#include <cstring>
#include <iostream>

Image::Image(int width, int height) {
    std::cout << "Image constructor was called!\n";
    width = width;
    height = height;
    pixelData = new unsigned char[width * height];
}

Image::~Image() {
    std::cout << "Image destructor was called!\n";
    delete[] pixelData;
}

Image::Image(const Image& other) {
    std::cout << "Image copy constructor was called!\n";
    width = other.width;
    height = other.height;
    pixelData = new unsigned char[other.width * other.height];
    std::memcpy(pixelData, other.pixelData, width * height);
}

Image::Image(Image&& other) {
    std::cout << "Image move constructor was called!\n";
    width = other.width;
    height = other.height;
    pixelData = other.pixelData;
    other.pixelData = nullptr;
}

bool Image::load(const std::string& path) {
    std::cout << "Loading image from: " << path << "\n";
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



