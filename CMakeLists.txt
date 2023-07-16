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

# 自动搜索当前目录（"."）中的所有源文件，并将其添加到 SOURCE_FILES 变量中
aux_source_directory(. SOURCE_FILES)

# 使用 GLOB_RECURSE 搜索当前目录及其子目录中的所有 .cpp 文件，并将路径列表存储在 SOURCE_FILES 变量中
#file(GLOB_RECURSE SOURCE_FILES "*.cpp")

# 将所有源文件添加到 SOURCE_FILES 变量中
#set(SOURCE_FILES main.cpp Quick.cpp OtherFile1.cpp OtherFile2.cpp)

include_directories(${OpenCV_INCLUDE_DIRS})
message(STATUS "OpenCV_INCLUDE_DIRS: ${OpenCV_INCLUDE_DIRS}")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(pix_opencv ${OpenCV_LIBS})