#include <iostream>

using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        int **p = new int *[m];
        for (int i = 0; i < m; i++) {
            p[i] = new int[n];
        }

        if (m <= 0 && n <= 0)
            return 0;
        if (m == 1 || n == 1)
            return 1;

        p[m - 1][n - 1] = 0;

        for (int k = 0; k < n; k++) {
            p[m - 1][k] = 1;
        }
        for (int k = 0; k < m; k++) {
            p[k][n - 1] = 1;
        }
//
//        p[m-1][n-2]=1;
//        p[m-2][n-1]=1;
        for (int i = m - 2; i >= 0; i--) {
            for (int j = n - 2; j >= 0; j--) {
                p[i][j] = p[i + 1][j] + p[i][j + 1];
            }
        }
        int res = p[0][0];
        for (int i = 0; i < m; i++)
            delete[] p[i];
        delete[] p;
        return res;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}