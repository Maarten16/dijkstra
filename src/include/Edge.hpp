#pragma once
#include <iostream>
#include "Node.hpp"



class Edge {
public:
    int weight;
    Node* destination;
    void printEdge();
};
