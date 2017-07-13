#include <iostream>
#include <vector>
#include <set>
using namespace std;

struct UndirectedGraphNode {
    int label;
    vector<UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x) {};
};


//judge if there is a cycle in the graph

class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<set<int>> graph(numCourses);
        vector<int> visited(numCourses,0);
        for(auto edge:prerequisites){
            graph[edge.second].insert(edge.first);
        }
        for(int i=0;i<numCourses;i++){
            if(!DFS(graph,visited,i))
                return false;
        }
        return true;
    }
    bool DFS(vector<set<int>> &graph,vector<int> &visited, int i){
        if(visited[i]==-1)
            return false;
        if(visited[i]==1)
            return true;
        visited[i]=-1;
        for(auto a:graph[i]){
            if(!DFS(graph,visited,a))
                return false;
        }
        visited[i]=1;
        return true;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}