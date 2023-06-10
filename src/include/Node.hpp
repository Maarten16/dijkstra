#pragma once
#include <iostream>
#include <vector>

class Edge;

class Node {
public:
    std::vector<Edge*> edges;
    std::string name;
};

