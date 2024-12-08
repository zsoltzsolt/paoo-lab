#ifndef FILTER_H
#define FILTER_H

#include <string>
#include "Image.h"

class Filter {
private:
    std::string type;
    int size;

public:
    Filter(const std::string& filterType, int filterSize); // constructor
    ~Filter(); // destructor

    Filter(const Filter& other); // copy constructor
    Filter(Filter&& other); // move constructor
    Filter& operator=(const Filter& other); // copy assignment operator

    void apply(Image& img);

    // getters
    const std::string& getType();
    int getSize();

    // setters
    void setType(const std::string& newType);
    void setSize(int newSize);

};

#endif
