cmake_minimum_required(VERSION 3.10)
project(ImageProcessing)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Image)
add_subdirectory(Filter)
add_subdirectory(ImageProcessor)

add_executable(ImageProcessing main.cpp)

target_link_libraries(ImageProcessing PUBLIC Image)
target_link_libraries(ImageProcessing PUBLIC Filter)
target_link_libraries(ImageProcessing PUBLIC ImageProcessor)

target_include_directories(ImageProcessing PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/Image"
                           "${PROJECT_SOURCE_DIR}/Filter"
                           "${PROJECT_SOURCE_DIR}/ImageProcessor"
                          )       