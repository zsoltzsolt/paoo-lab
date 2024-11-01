#ifndef FILTER_H
#define FILTER_H

#include <string>
#include "../Image/Image.h"

class Filter {
private:
    std::string type;
    int size;

public:
    Filter(const std::string& filterType, int filterSize); // constructor

    void apply(Image& img);

    const std::string& getType();
    int getSize();

};

#endif
