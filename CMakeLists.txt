cmake_minimum_required(VERSION 3.27)
project(final)

set(CMAKE_CXX_STANDARD 17)

add_executable(final main.cpp
        arrayList.cpp
        arrayList.h
        SinglyLinkedList.h
        tests.h
        randomNumberGenerator.cpp
        randomNumberGenerator.h)
