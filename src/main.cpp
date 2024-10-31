#include <iostream>
#include "Image/Image.h"

int main() {
    Image img(640, 480);

    if (img.save("output.jpeg")) {
        std::cout << "Image saved successfully!\n";
    } else {
        std::cout << "Failed to save image!\n";
    }

    return 0;

}

