#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int m = 0;
    int n = 0;

    int numIslands(vector<vector<char>> &grid) {
        int count = 0;
        n = grid.size();
        if (n == 0) return 0;
        m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    DFS(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }

    void DFS(vector<vector<char>> &grid, int i, int j) {
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != '1') return;
        grid[i][j] = '0';
        DFS(grid, i + 1, j);
        DFS(grid, i - 1, j);
        DFS(grid, i, j + 1);
        DFS(grid, i, j - 1);
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}