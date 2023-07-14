cmake_minimum_required(VERSION 3.1)

project(pix_opencv VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

message(STATUS "OpenCV_DIR_x86: ${OpenCV_DIR_x86}")
message(STATUS "OpenCV_DIR_arm64: ${OpenCV_DIR_arm64}")

set(OpenCV_DIR_arm64 ./library/arm_64/lib/cmake/opencv4)
set(OpenCV_DIR_x86 ./library/x86_64/lib/cmake/opencv4)

set(OpenCV_DIR ${OpenCV_DIR_arm64})

list(APPEND CMAKE_PREFIX_PATH ${OpenCV_DIR})

find_package(OpenCV REQUIRED PATHS ${OpenCV_DIR})

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(pix_opencv main.cpp)
target_link_libraries(pix_opencv ${OpenCV_LIBS})