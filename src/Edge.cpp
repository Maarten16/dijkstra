#include "include/Edge.hpp"
Edge::Edge(Node* destination, int weight) {
    this->destination = destination;
    this->weight = weight;
}