#include <iostream>
#include "Image/Image.h"
#include "Filter/Filter.h"
#include "ImageProcessor/ImageProcessor.h"

int main() {
    Image img(640, 480);

    Filter edgeFilter("EdgeDetection", 3);
    Filter blurFilter("Blur", 5);

    ImageProcessor processor;
    processor.addFilter(edgeFilter);
    processor.addFilter(blurFilter);

    processor.process(img);

    if (img.save("output.jpeg")) {
        std::cout << "Image saved successfully!\n";
    } else {
        std::cout << "Failed to save image!\n";
    }

    return 0;

}

