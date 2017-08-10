#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        if (n < m) return 0;
        vector <vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int k = 0; k <= n; k++)
            dp[k][0] = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                dp[i][j] = dp[i - 1][j] + (t[j - 1] == s[i - 1] ? dp[i - 1][j - 1] : 0);
            }
        }
        return dp[n][m];

    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}