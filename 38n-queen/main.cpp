#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    //用一个一维数组去存皇后在对应行的哪一列，因为一行只能有一个皇后
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<int> columnRow;
        placequeen(n, 0, columnRow, result);
        return result;

    }

    bool isvalid(int row, vector<int> &columnRow) {
        for (int i = 0; i < row; i++) {
            if (columnRow[row] == columnRow[i] || abs(columnRow[row] - columnRow[i]) == row - i)
                return false;
        }
        return true;
    }

    void placequeen(int n, int row, vector<int> &columnRow, vector<vector<string>> &result) {
        if (row == n) {
            vector<string> item(n);
            for (int i = 0; i < n; i++) {
                string strRow;
                for (int j = 0; j < n; j++) {
                    if (columnRow[i] == j) {
                        strRow.append("Q");
                    } else
                        strRow.append(".");
                }
                item[i] = strRow;
            }
            result.push_back(item);
            return;
        }
        for (int i = 0; i < n; i++) {
            columnRow[row] = i;
            if (isvalid(row, columnRow)) {
                placequeen(n, row + 1, columnRow, result);
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}