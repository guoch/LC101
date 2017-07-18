#include <iostream>


#define LONG_MAX 0x7fffffff
#define LONG_MIN 0x80000000


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    bool isValid(TreeNode *p, long low, long high) {
        if (p == NULL)
            return true;     // may occur problem when INT_MIN   and INT_MAX  How to process it
        if (p->val <= low || p->val >= high) return false;
//        return (p->val > low) && (p->val < high) && isValid(p->left,low,p->val) && isValid(p->right,p->val,high);
        return isValid(p->left, low, p->val) && isValid(p->right, p->val, high);
    }

    bool isValidBST(TreeNode *root) {

        return isValid(root, LONG_MIN, LONG_MAX);

    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}