// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    // construct graph  if reverse then 1.0/division 
    vector<double>
    calcEquation(vector<pair<string, string>> equations, vector<double> &values, vector<pair<string, string>> queries) {
        vector<double> res;
        map<pair<string, string>, double> graph;
        for (int i = 0; i < values.size(); i++) {
            graph[make_pair(equations[i].first, equations[i].second)] = values[i];
            if (values[i] != 0)
                graph[make_pair(equations[i].second, equations[i].first)] = 1.0 / values[i];

        }
        for (auto i : queries) {
            set<string> s;
            double k = dfs(i.first, i.second, graph, s);
            if (k) res.push_back(k);
            else
                res.push_back(-1);
        }
        return res;

    }

    double dfs(string source, string destination, map<pair<string, string>, double> &graph, set<string> &s) {
        auto itr = graph.find(make_pair(source, destination));
        if (itr != graph.end()) {
            return graph[make_pair(source, destination)];
        }
        for (auto edge:graph) {
            if (edge.first.first == source) {
                if (s.find(edge.first.second) == s.end()) {  //not found dfs  A->B   B B->C A->C
                    s.insert(edge.first.second);             //s  C
                    double k = dfs(edge.first.second, destination, graph, s);
                    if (k)
                        return edge.second * k;
                }
            } else
                continue;

        }
        return 0;
    }
};


int main() {
    return 0;
}

