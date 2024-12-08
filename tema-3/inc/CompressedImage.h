#ifndef COMPRESSEDIMAGE_H
#define COMPRESSEDIMAGE_H

#include "Image.h"

class CompressedImage : public Image {
private:
    int compressionRatio;

public:
    CompressedImage(const std::string& name, int compressionRatio = 0);
    CompressedImage(const CompressedImage& rhs);            // copy ctor
    CompressedImage& operator=(const CompressedImage& rhs); // copy assignment operator
    ~CompressedImage();

    void compress(int targetRatio); 
    void decompress();                
    void displayCompressionInfo(); 
};

#endif
