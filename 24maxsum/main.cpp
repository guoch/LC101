#include <iostream>

#define INT_MIN 0x80000000


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    int maxSum;

    int maxPathSum(TreeNode *root) { //root开设做dfs ，直到记录最长的一个
        if (root == NULL)
            return 0;
        maxSum = INT_MIN;
        findMax(root);
        return maxSum;


    }

    int findMax(TreeNode *p) {   //后序遍历
        if (p == NULL)
            return 0;
        int left = findMax(p->left);
        int right = findMax(p->right);

        maxSum = max(p->val + left + right, maxSum);  //记录轨迹长度

        int maxNumber = p->val + max(p->left, p->right);   //此处有技巧，可以解决有left或者right小于0 的情况
        return maxNumber > 0 ? maxNumber : 0; //如果小于0 的情况，左右侧都不会取，而是选择本身
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}