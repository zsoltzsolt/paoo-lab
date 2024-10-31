#ifndef IMAGE_H
#define IMAGE_H

#include <string>

class Image{

private:
    int width, height;
    unsigned char* pixelData;

public:
    Image(int width, int height); // constructor

    ~Image(); // destructor

    Image(const Image& other); // copy constructor

    Image(Image&& other); // move constructor

    bool load(const std::string& path); // load an image from a specified path
    bool save(const std::string& path); // save the image to a specified path

    int getWidth();
    int getHeight();
    unsigned char* getPixelData();
};

#endif