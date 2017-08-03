#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        int **p = new int *[m + 1];
        for (int i = 0; i < m + 1; i++) {
            p[i] = new int[n + 1];
        }

        for (int i = 0; i < m + 1; i++)
            for (int j = 0; j < n + 1; j++)
                p[i][j] = 0;
//        leetcode must initialize

        if (m == 0)
            return 0;
        p[m - 1][n] = 1;

        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                p[i][j] = obstacleGrid[i][j] == 1 ? 0 : p[i + 1][j] + p[i][j + 1];
            }
        }

        int result = p[0][0];
        for (int i = 0; i < m + 1; i++)
            delete[] p[i];
        delete[] p;
        return result;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}