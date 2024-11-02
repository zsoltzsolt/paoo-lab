cmake_minimum_required(VERSION 3.10)
set(myproject "ImageProcessing")
project(${myproject})

if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()    
endif()

add_library(image STATIC src/Image.cpp inc/Image.h)
add_library(filter STATIC src/Filter.cpp inc/Filter.h)
add_library(imageProcessor STATIC src/ImageProcessor.cpp inc/ImageProcessor.h)

add_executable(${myproject} src/main.cpp)

target_link_libraries(${myproject} PUBLIC image)
target_link_libraries(${myproject} PUBLIC filter)
target_link_libraries(${myproject} PUBLIC imageProcessor)

target_include_directories(${myproject} PUBLIC
                           "${PROJECT_BINARY_DIR}"
                          )       