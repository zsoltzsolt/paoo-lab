#include <iostream>
#include "Image/Image.h"
#include "Filter/Filter.h"
#include "ImageProcessor/ImageProcessor.h"

int main() {
    Image img("image1.png");

    std::cout << "Image resolution: (" << img.getWidth() << "x" << img.getHeight() << ")\n";

    Filter edgeFilter("EdgeDetection", 1);
    Filter blurFilter("Blur", 2);
    Filter edgeFilter2("EdgeDetection", 3);
    Filter blurFilter2("Blur", 4);
    Filter edgeFilter3("EdgeDetection", 5);

    ImageProcessor processor;
    processor.addFilter(edgeFilter);
    processor.addFilter(blurFilter);
    processor.addFilter(edgeFilter2);
    processor.addFilter(blurFilter2);
    processor.addFilter(edgeFilter3);

    processor.process(img);

    if (img.save("output.jpeg")) {
        std::cout << "Image saved successfully!\n";
    } else {
         std::cout << "Failed to save image!\n";
    }

    return 0;

}

