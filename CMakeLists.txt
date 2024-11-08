cmake_minimum_required(VERSION 3.10)
set(myproject "ImageProcessing")
project(${myproject})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(image STATIC src/Image.cpp inc/Image.h)
add_library(filter STATIC src/Filter.cpp inc/Filter.h)
add_library(imageProcessor STATIC src/ImageProcessor.cpp inc/ImageProcessor.h)

add_executable(${myproject} src/main.cpp)

target_link_libraries(${myproject} PUBLIC image)
target_link_libraries(${myproject} PUBLIC filter)
target_link_libraries(${myproject} PUBLIC imageProcessor)

target_include_directories(${myproject} 
    PRIVATE src 
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
        $<INSTALL_INTERFACE:inc>
)   