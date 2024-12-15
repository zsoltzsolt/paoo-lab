cmake_minimum_required(VERSION 3.10)
 
set(project_name "tema-4")
project(${project_name})
 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
 
set(SOURCES
    src/main.cpp
    src/Investment.cpp
    src/Stock.cpp
    src/InvestmentFactory.cpp
    src/Lock.cpp
)

include_directories(${CMAKE_SOURCE_DIR}/inc)
 
add_executable(${project_name} ${SOURCES})

target_include_directories(${project_name} PRIVATE ${CMAKE_SOURCE_DIR}/inc)