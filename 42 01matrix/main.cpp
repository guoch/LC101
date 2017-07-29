#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {

public:
    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, 1, 0, -1};

    class Node {
    public:
        int x;
    public:
        int y;
    public:
        int d;

    public:
        Node(int x, int y, int d) {
            this->x = x;
            this->y = y;
            this->d = d;
        }
    };


    vector<vector<int>> updateMatrix(vector<vector<int>> &matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> result(n, vector<int>(m, 0));
        vector<vector<bool>> mark(n, vector<bool>(m, false));
        queue<Node> myqueue;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    myqueue.push(Node(i, j, 0));
                    mark[i][j] = true;
                }

            }
        }
        while (!myqueue.empty()) {
            Node node = myqueue.front();
            myqueue.pop();
            result[node.x][node.y] = node.d;
            for (int k = 0; k < 4; k++) {
                int x = node.x + dx[k];
                int y = node.y + dy[k];
                if (0 <= x && x < n && 0 <= y && y < m && !mark[x][y]) {
                    myqueue.push(Node(x, y, node.d + 1));
                    mark[x][y] = true;
                }
            }

        }
        return result;


    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}