CMAKE_MINIMUM_REQUIRED(VERSION 3.0.0)

PROJECT(Jednostruko_linkana_lista)

ADD_EXECUTABLE(Jednostruko_linkana_lista main.cpp)

ADD_LIBRARY(src src/deleteNodes.cpp src/jednostruka.cpp)

TARGET_INCLUDE_DIRECTORIES(includes includes/jednostruka.hpp)



