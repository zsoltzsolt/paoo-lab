#include "CompressedImage.h"
#include "Image.h"
#include <iostream>

#define GREEN "\033[32m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

void createSeparator(const std::string& color, const std::string& text) {
    std::cout << color << "\n--------------- " + text + " ---------------\n\n" << RESET;
}

int main() {
    createSeparator(GREEN, "Create an image object");
    Image img("Image");
    img.displayInfo();

    createSeparator(MAGENTA, "Copy the Image object");
    Image copiedImg = img;
    std::cout << "\nCopied Image Info:" << std::endl;
    copiedImg.displayInfo();

    createSeparator(GREEN, "Create a CompressedImage object");
    CompressedImage compressedImg("CompressedImage", 50);
    std::cout << "\nCompressed Image Info:" << std::endl;
    compressedImg.displayCompressionInfo();

    createSeparator(GREEN, "Compress the image further");
    compressedImg.compress(25);
    std::cout << "\nAfter Further Compression:" << std::endl;
    compressedImg.displayCompressionInfo();

    createSeparator(GREEN, "Decompress the image");
    compressedImg.decompress();
    std::cout << "\nAfter Decompression:" << std::endl;
    compressedImg.displayCompressionInfo();

    createSeparator(MAGENTA, "Copy the CompressedImage object");
    CompressedImage copiedCompressedImg = compressedImg;
    std::cout << "\nCopied Compressed Image Info:" << std::endl;
    copiedCompressedImg.displayCompressionInfo();

    return 0;
}
