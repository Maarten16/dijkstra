#pragma once
#include <iostream>
#include "Node.hpp"

class Graph {

public:
    std::vector<Node*> nodes;

    bool readGraph(std::string filename);
    void addNode(Node* node);
    void connectNodes(Node* node1, Node* node2, int weight);
    void printGraph();

};

