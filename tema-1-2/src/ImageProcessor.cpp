#include "../inc/ImageProcessor.h"
#include <iostream>

ImageProcessor::ImageProcessor()
    :filters() {
    std::cout << "ImageProcessor constructor was called!\n";
}

ImageProcessor::~ImageProcessor() {
    std::cout << "ImageProcessor destructor was called!\n";
    // std::vector follows the "Resource Acquisition Is Initialization" (RAII) principle. 
    // It ensures that resources are allocated and released automatically.
}

ImageProcessor::ImageProcessor(const ImageProcessor& other) {
    std::cout << "ImageProcessor copy constructor was called!\n";
    for (const auto& filter : other.filters) {
        filters.push_back(filter); 
    }
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

void ImageProcessor::showPipeline() {
    std::cout << "Input image -> ";
    for (auto& filter: filters) {
        std::cout << "(" << filter.getType() << ":" << filter.getSize() << ") -> ";
    }
    std::cout << "Output image\n";
}