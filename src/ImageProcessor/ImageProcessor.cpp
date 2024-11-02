#include "ImageProcessor.h"
#include <iostream>

ImageProcessor::ImageProcessor() {
    std::cout << "ImageProcessor constructor was called!\n";
}

ImageProcessor::~ImageProcessor() {
    std::cout << "ImageProcessor destructor was called!\n";
}

ImageProcessor::ImageProcessor(const ImageProcessor& other)
    : filters(other.filters) { 
    std::cout << "ImageProcessor copy constructor was called!\n";
}

ImageProcessor::ImageProcessor(ImageProcessor&& other) 
    : filters(std::move(other.filters)) { 
    std::cout << "ImageProcessor move constructor was called!\n";
}

void ImageProcessor::addFilter(Filter& filter) {
    filters.push_back(filter);
}

void ImageProcessor::process(Image& img) {
    for (auto& filter: filters) {
        filter.apply(img);
    }
}