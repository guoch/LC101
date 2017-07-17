#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    int numTrees(int n) {
        vector<int> sum(n + 1);
        sum[0] = 1;
        sum[1] = 1;
        sum[2] = 2;
        for (int i = 3; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                sum[i] += sum[j - 1] * sum[i - j];
            }
        }
        return sum[n];

    }
};

int main() {
    Solution solve;
    int result = solve.numTrees(3);
    cout << result << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}