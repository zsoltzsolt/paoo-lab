#ifndef IMAGE_H
#define IMAGE_H

#include <string.h>
#include <iostream>

class Image {
private:
    std::string name;
    int width, height;
    int *pixelData;

public:
    Image(const std::string& name); // ctor
    Image(const Image& rhs); // copy ctor
    Image& operator=(const Image& rhs); // copy assignment operator
    ~Image(); // dtor

    void displayInfo() const;
};

#endif