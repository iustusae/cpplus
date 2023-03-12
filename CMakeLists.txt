cmake_minimum_required(VERSION 3.24)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(ch1/classes)

add_executable(cpp
        ch1/classes/Sales_item.cpp
        ch1/classes/Sales_item.hpp ch1/classes/add_items.cpp)
