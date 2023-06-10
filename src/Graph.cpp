#include "include/Graph.hpp"
#include "include/Edge.hpp"
#include <fstream>
#include <sstream>
using namespace std;

bool Graph::readGraph(std::string filename) {


    vector<vector<string>> content;
    vector <string> station_names, start_station, end_station, weight;
    vector<string> row;
    string line, word;
    int indexStart, indexEnd, number_of_nodes;

    // Read content of file

    fstream file (filename, ios::in);
    if(file.is_open())
    {
        while(getline(file, line))
        {
            row.clear();

            stringstream str(line);

            while(getline(str, word, ';'))
                row.push_back(word);
            content.push_back(row);
        }
    }
    else {
        cout << "Could not open the file\n";
        return -1;
    }

    // distribute content of file into variables

    number_of_nodes = stoi(content[0][0]);

    for(int i=1;i<content[0].size();i++)
    {
        station_names.push_back(content[0][i]);
    }

    for(int i=2;i<content.size();i++)
    {
        start_station.push_back(content[i][0]);
        end_station.push_back(content[i][1]);
        weight.push_back(content[i][2]);
    }

    // create nodes
    for (int i = 0; i < number_of_nodes; i++) {
        Node* node = new Node();
        node->name = station_names[i];
        nodes.push_back(node);
    }

    // create edges and connect nodes
    for(int i = 0; i < start_station.size(); i++) {
        indexStart = start_station[i][0] - 'A';
        indexEnd = end_station[i][0] - 'A';
        Edge* edge = new Edge(nodes[indexEnd], stoi(weight[i]));
        Edge* edge2 = new Edge(nodes[indexStart], stoi(weight[i]));
        nodes[indexStart]->edges.push_back(edge);
        nodes[indexEnd]->edges.push_back(edge2);
    }

    cout << 9;


}
