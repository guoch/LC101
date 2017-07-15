#include <iostream>
#include <vector>
#include <set>

using namespace std;

//struct UndirectedGraphNode {
//    int label;
//    vector<UndirectedGraphNode *> neighbors;
//    UndirectedGraphNode(int x) : label(x) {};
//};
//拓扑排序得到结果

//judge if there is a cycle in the graph

class Solution {
public:
    vector<int> findOrder(int numCourses, vector <pair<int, int>> &prerequisites) {
        vector <set<int>> graph(numCourses);

        for (auto edge:prerequisites) {
            graph[edge.second].insert(edge.first);
        }
        vector<int> result;
        vector<int> degree(numCourses, 0);
        for (int i = 0; i < numCourses; i++) {
            for (auto it = graph[i].begin(); it != graph[i].end(); it++) {
                ++degree[*it];
            }
        }

        for (int j = 0, i; j < numCourses; j++) {
            for (i = 0; i < numCourses && degree[i] != 0; i++);
            result.push_back(i);
            if (i == numCourses)
                return {};

            degree[i] = -1;
            for (auto it = graph[i].begin(); it != graph[i].end(); it++) {
                --degree[*it];
            }
        }
        return result;
    }
};

//    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
//        vector<set<int>> graph(numCourses);
//        vector<int> visited(numCourses,0);
//        for(auto edge:prerequisites){
//            graph[edge.second].insert(edge.first);
//        }
//        for(int i=0;i<numCourses;i++){
//            if(!DFS(graph,visited,i))
//                return false;
//        }
//        return true;
//    }
//
//
//    bool DFS(vector<set<int>> &graph,vector<int> &visited, int i){
//        if(visited[i]==-1)
//            return false;
//        if(visited[i]==1)
//            return true;
//        visited[i]=-1;
//        for(auto a:graph[i]){
//            if(!DFS(graph,visited,a))
//                return false;
//        }
//        visited[i]=1;
//        return true;
//    }
//};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}