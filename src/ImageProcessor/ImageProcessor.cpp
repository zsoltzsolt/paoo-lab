#include "ImageProcessor.h"
#include <iostream>

ImageProcessor::ImageProcessor() {
    std::cout << "ImageProcessor constructor was called!\n";
}

ImageProcessor::~ImageProcessor() {
    std::cout << "ImageProcessor destructor was called!\n";
}

void ImageProcessor::addFilter(Filter& filter) {
    filters.push_back(filter);
}

void ImageProcessor::process(Image& img) {
    for (auto& filter: filters) {
        filter.apply(img);
    }
}