#include "include/Graph.hpp"
#include <fstream>
#include <sstream>
using namespace std;

bool Graph::readGraph(std::string filename) {


    vector<vector<string>> content;
    vector <string> station_names, start_station, end_station, weight;
    vector<string> row;
    string line, word;

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

    string number_of_nodes = content[0][0];

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
    for(auto i:station_names)
    {
        cout << i << " ";
    }
    cout << endl;

    for(auto i:start_station)
    {
        cout << i << " ";
    }
    cout << endl;

    for(auto i:end_station)
    {
        cout << i << " ";
    }
    cout << endl;

    for(auto i:weight)
    {
        cout << i << " ";
    }
    cout << endl;


}