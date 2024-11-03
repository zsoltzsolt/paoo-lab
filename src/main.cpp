#include <iostream>
#include "../inc/Image.h"
#include "../inc/Filter.h"
#include "../inc/ImageProcessor.h"

std::string createSeparator(const std::string& text) {
    return "\n----- " + text + " -----\n\n";
}

int main() {
    std::cout << createSeparator("Create an image");
    Image img("image1.png");
    std::cout << "Image resolution: (" << img.getWidth() << "x" << img.getHeight() << ")\n";
    
    std::cout << createSeparator("Create filters");
    Filter edgeFilter("EdgeDetection", 1);
    Filter blurFilter("Blur", 2);
    Filter edgeFilter2("EdgeDetection", 3);
    
    std::cout << createSeparator("Create image processor");
    ImageProcessor processor;

    std::cout << createSeparator("Add filters to processor");
    processor.addFilter(edgeFilter);
    processor.addFilter(blurFilter);
    processor.addFilter(edgeFilter2);
    
    std::cout << createSeparator("Show processing pipeline");
    processor.showPipeline();

    std::cout << createSeparator("Apply the filters");
    processor.process(img);
    
    std::cout << createSeparator("Save the image");
    if (img.save("output.jpeg")) {
        std::cout << "Image saved successfully!\n";
    } else {
         std::cout << "Failed to save image!\n";
    }


    // Copy constructor vs Move constructor
    std::cout << createSeparator("Copy constructor");
    ImageProcessor copied_processor = processor; // copy constructor

    std::cout << createSeparator("Move constructor");
    ImageProcessor moved_processor = std::move(processor); // move constructor

    std::cout << createSeparator("Destructors");

    return 0;

}

