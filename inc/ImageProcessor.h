#ifndef IMAGEPROCESSOR_H
#define IMAGEPROCESSOR_H

#include "Filter.h"
#include "Image.h"
#include <vector>
#include "Uncopyable.h"

class ImageProcessor{
private:
    std::vector<Filter> filters;

public:
    ImageProcessor(); // constructor
    ~ImageProcessor(); // destructor

    ImageProcessor(const ImageProcessor& other); // copy constructor

    ImageProcessor(ImageProcessor&& other); // move constructor

    void showPipeline();

    void addFilter(Filter& filter);
    void process(Image& img);
};

#endif