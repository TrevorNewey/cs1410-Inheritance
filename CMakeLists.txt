cmake_minimum_required(VERSION 3.8)
project(inheritance)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp counter.cpp counter.h)
set(SOURCE_FILES newEmployee.cpp employee.cpp employee.h manager.cpp manager.h scientists.cpp scientists.h laborer.cpp laborer.h)
add_executable(inheritance ${SOURCE_FILES})