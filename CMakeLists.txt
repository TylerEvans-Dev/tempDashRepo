cmake_minimum_required(VERSION 3.5)
project(wiringPiProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(wiringPiExample src/main.cpp)

# Find the WiringPi library
find_library(WIRINGPI_LIB wiringPi)

# Link WiringPi to the project
target_link_libraries(wiringPiExample ${WIRINGPI_LIB})

