cmake_minimum_required(VERSION 3.10)
project(ImageProcessing)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Image)

add_executable(ImageProcessing main.cpp)

target_link_libraries(ImageProcessing PUBLIC Image)

target_include_directories(ImageProcessing PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/Image"
                          )       