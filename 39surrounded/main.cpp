#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int m = 0;
    int n = 0;

    void solve(vector<vector<char>> &board) {
        n = board.size();
        if (n != 0) {
            m = board[0].size();
        }
        for (int i = 0; i < m; i++) {
            dfs(0, i, board);
            dfs(n - 1, i, board);
        }
        for (int j = 0; j < n; j++) {
            dfs(j, 0, board);
            dfs(j, m - 1, board);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'T')
                    board[i][j] = 'O';
            }
        }

    }

    void dfs(int i, int j, vector<vector<char>> &board) {
        if (board[i][j] == 'O') {
            board[i][j] = 'T';
            if (i > 1) dfs(i - 1, j, board);
            if (i < m - 1) dfs(i + 1, j, board);
            if (j > 1) dfs(i, j - 1, board);
            if (j < n - 1) dfs(i, j + 1, board);
        }
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}