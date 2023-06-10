#pragma once
#include <iostream>
#include "Node.hpp"



class Edge {
public:
    int weight;
    Node* destination;

    Edge(Node* destination, int weight);
    void printEdge();
};
