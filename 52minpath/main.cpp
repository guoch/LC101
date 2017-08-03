#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>> &grid) {
        int n = grid.size();
        int m;
        if (n == 0) {
            return 0;
        }
        if (n != 0)
            m = grid[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 0));

        dp[0][0] = grid[0][0];
        if (n > 1) {

            for (int i = 1; i < n; i++)
                dp[i][0] += grid[i][0] + dp[i - 1][0];
        }
        if (m > 1) {
            for (int j = 1; j < m; j++)
                dp[0][j] += grid[0][j] + dp[0][j - 1];

        }

//                sum+=grid[i][0];


//        dp[n-1][m-1]=grid[n-1][m-1];
//        dp[0][0]=grid[0][0];
//        dp[1][0]=grid[0][0]+grid[1][0];
//        dp[0][1]=grid[0][0]+grid[0][1];
        for (int i = 1; i <= n - 1; i++)
            for (int j = 1; j <= m - 1; j++) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
            }
        return dp[n - 1][m - 1];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}