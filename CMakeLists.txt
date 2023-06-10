cmake_minimum_required(VERSION 3.22)
project(dijkstra)

set(CMAKE_CXX_STANDARD 23)

add_executable(dijkstra src/main.cpp src/Node.cpp src/include/Node.hpp src/Edge.cpp src/include/Edge.hpp src/Graph.cpp src/include/Graph.hpp)
