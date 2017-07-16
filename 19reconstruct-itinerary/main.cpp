#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <map>
#include <stack>

using namespace std;

//欧拉一笔画问题
class Solution {
public:
    map<string,multiset<string>> graph;
    vector<string> result;
    vector<string> findItinerary(vector<pair<string, string>> tickets) {

        for (auto edge:tickets) {
            graph[edge.first].insert(edge.second);
        }
//        DFS("JFK");
        stack<string> waystack;
        waystack.push("JFK");
        while(!waystack.empty()){
            string current=waystack.top();
            if(graph[current].empty()){
                result.push_back(current);
                waystack.pop();

            }
            else{
                waystack.push(*(graph[current].begin()));
                graph[current].erase(graph[current].begin());
            }
        }

        reverse(result.begin(),result.end());
        return result;
    }

//    void DFS(string departure)
//    {
//        while(graph[departure].size() > 0)
//        {
//            string tem = *graph[departure].begin();
//            graph[departure].erase(graph[departure].begin());
//            DFS(tem);
//        }
//        result.push_back(departure);
//    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}