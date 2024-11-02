#include <iostream>
#include "Image/Image.h"
#include "Filter/Filter.h"
#include "ImageProcessor/ImageProcessor.h"

int main() {
    const std::string separator = "-----------------------------------------\n";

    Image img("image1.png");
    std::cout << "Image resolution: (" << img.getWidth() << "x" << img.getHeight() << ")\n";
    std::cout << separator;

    Filter edgeFilter("EdgeDetection", 1);
    Filter blurFilter("Blur", 2);
    Filter edgeFilter2("EdgeDetection", 3);
    std::cout << separator;

    ImageProcessor processor;
    processor.addFilter(edgeFilter);
    processor.addFilter(blurFilter);
    processor.addFilter(edgeFilter2);
    std::cout << separator;

    processor.process(img);
    std::cout << separator;

    if (img.save("output.jpeg")) {
        std::cout << "Image saved successfully!\n";
    } else {
         std::cout << "Failed to save image!\n";
    }
    std::cout << separator;


    // Copy constructor vs Move constructor
    ImageProcessor copied_processor = processor; // copy constructor
    std::cout << separator;

    ImageProcessor moved_processor = std::move(processor); // move constructor
    std::cout << separator;

    return 0;

}

