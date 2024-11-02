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

    void apply(Image& img);

    const std::string& getType();
    int getSize();

};

#endif
