#ifndef IMAGEPROCESSOR_H
#define IMAGEPROCESSOR_H

#include "../Filter/Filter.h"
#include "../Image/Image.h"
#include <vector>

class ImageProcessor {
private:
    std::vector<Filter> filters;

public:
    ImageProcessor(); // constructor
    ~ImageProcessor(); // destructor

    void addFilter(Filter& filter);
    void process(Image& img);
};

#endif