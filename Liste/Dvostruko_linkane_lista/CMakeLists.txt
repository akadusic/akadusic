cmake_minimum_required(VERSION 3.0.0)

project(doubleList)

add_library(print src/printList.cpp)

add_library(insertF src/insertInFront.cpp)

add_executable(mejn main.cpp)

target_link_libraries(mejn PRIVATE insertF print)
