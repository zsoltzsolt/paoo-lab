#ifndef FILTERNOCOPY_H
#define FILTERNOCOPY_H

#include <string>
#include "Image.h"
#include "Uncopyable.h"

class FilterNoCopy: private Uncopyable {
private:
    std::string type;
    int size;

public:
    FilterNoCopy(const std::string& filterType, int filterSize); // constructor
    ~FilterNoCopy(); // destructor

    // FilterNoCopy(const FilterNoCopy&) = delete;
    // FilterNoCopy& operator=(const FilterNoCopy&) = delete;

    void apply(Image& img);

    // getters
    const std::string& getType() const;
    int getSize() const;

    // setters
    void setType(const std::string& newType);
    void setSize(int newSize);
};

#endif
