cmake_minimum_required(VERSION 3.16)
project(md5)

set(CMAKE_CXX_STANDARD 20)

#添加头文件搜索路径
include_directories(/usr/local/Cellar/boost/1.73.0/include/)

#添加库文件搜索路径
link_directories(/usr/local/Cellar/boost/1.73.0/lib/)


add_executable(md5 main.cpp)
