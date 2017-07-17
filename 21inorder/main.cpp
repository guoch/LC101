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
    vector<int> result = {};

    void inorder(TreeNode *root) {
        if (root == NULL)
            return;
        inorder(root->left);
        result.push_back(root->val);
        inorder(root->right);
    }

    vector<int> inorderTraversal(TreeNode *root) {
        inorder(root);
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}