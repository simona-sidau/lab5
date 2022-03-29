cmake_minimum_required(VERSION 3.21)
project(lab4coordonate)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab4coordonate main.cpp Rectangle/Rectangle.h Rectangle/Rectangle.cpp Point/Point.cpp Point/Point.h Tests/Tests.h Tests/Tests.cpp Menu/menu.cpp Menu/menu.h Menu/RunMenu.cpp Menu/RunMenu.h Menu/option.cpp Menu/option.h Repository/Repository.cpp Repository/Repository.h Rectangle/Operations.h Rectangle/Operations.cpp)
