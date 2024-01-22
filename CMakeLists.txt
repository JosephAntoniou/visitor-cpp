cmake_minimum_required(VERSION 3.25)
project(Visitor)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")

add_executable(VisitorEx main.cpp Rectangle.cpp Rectangle.h Square.cpp Square.h Shape.h Visitor.h AreaVisitor.cpp Circle.cpp Circle.h)
add_library(Visitor SHARED Rectangle.cpp Rectangle.h Square.cpp Square.h Shape.h Visitor.h AreaVisitor.cpp Circle.cpp Circle.h)
