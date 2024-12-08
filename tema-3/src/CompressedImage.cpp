#include "CompressedImage.h"
#include <iostream>

// ctor
CompressedImage::CompressedImage(const std::string& name, int compressionRatio)
    : Image(name), compressionRatio(compressionRatio) {}

// copy ctor
CompressedImage::CompressedImage(const CompressedImage& rhs)
    : Image(rhs), compressionRatio(rhs.compressionRatio) {}

// copy assignment operator
CompressedImage& CompressedImage::operator=(const CompressedImage& rhs) {
    if (this == &rhs) return *this; // Item 11: Handle assignment to self in operator=
    
    Image::operator=(rhs); // Item 12: Copy all parts of an object
    compressionRatio = rhs.compressionRatio;
    
    return *this; // Item 10: Have assignment operators return a reference to *this
}

// dtor
CompressedImage::~CompressedImage() {}

void CompressedImage::compress(int targetRatio) {
    if (targetRatio < 0 || targetRatio > 100) {
        std::cerr << "Invalid compression ratio! Must be between 0 and 100." << std::endl;
        return;
    }
    compressionRatio = targetRatio;
    std::cout << "Image compressed to " << compressionRatio << "% of original size." << std::endl;
}


void CompressedImage::decompress() {
    compressionRatio = 0; 
    std::cout << "Image decompressed to original size." << std::endl;
}


void CompressedImage::displayCompressionInfo() {
    displayInfo(); 
    if (compressionRatio > 0) {
        std::cout << "Compression Ratio: " << compressionRatio << "%" << std::endl;
    } else {
        std::cout << "Image is not compressed." << std::endl;
    }
}
