#include <iostream>
#include <vector>
#include <set>
using namespace std;

struct UndirectedGraphNode {
    int label;
    vector<UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x) {};
};


class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<pair<int, int>>& edges) {

    }
};