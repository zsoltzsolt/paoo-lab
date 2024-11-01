#include "ImageProcessor.h"

void ImageProcessor::addFilter(const Filter& filter) {
    filters.push_back(filter);
}

void ImageProcessor::process(Image& img) {
    for (auto& filter: filters) {
        filter.apply(img);
    }
}