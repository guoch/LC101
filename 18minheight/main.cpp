#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;

//How to represent a graph
//vector<set<int>> graph;
//for(auto edge:edges){
//graph[edge.first].insert(edge.second);
//graph[edge.second].insert(edge.first);
//}

// remove leaves layer-by-layer
//The basic idea is "keep deleting leaves layer-by-layer, until reach the root."
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<pair<int, int>> &edges) {
        //shortest distance to the leaf node  BFS
        vector<set<int>> graph(n);   //vector<set<int>> graph(n);   if not n, will rum time error
        for (auto edge:edges) {
            graph[edge.first].insert(edge.second);
            graph[edge.second].insert(edge.first);
        }
        if (n == 1)
            return {0};

        vector<int> leafnodes;

        for (int i = 0; i < graph.size(); i++) {
            if (graph[i].size() == 1)
                leafnodes.push_back(i);  //all leaf node
        }
        while(1) {
            vector<int> nextleaves;
            for (auto leafnode: leafnodes) {
                for (auto neighbor: graph[leafnode]) {
                    graph[neighbor].erase(leafnode);
                    if (graph[neighbor].size() == 1) //leaf mode again
                        nextleaves.push_back(neighbor);
                }
            }
            if(nextleaves.empty())
                return leafnodes;
            leafnodes = nextleaves;
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}