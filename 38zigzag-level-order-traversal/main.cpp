#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode *> myqueue;
        vector<vector<int>> result;
        if(root==NULL)
            return {};
        TreeNode *rightmost;
        myqueue.push(root);
//        rightmost=root;
        bool flag=true;               //[3,9,20,null,null,15,7]
        while(!myqueue.empty()){
            int len=myqueue.size();    //1         not change the order
            //same order as, keep different order in the array not tree
            vector<int> tmp(len);
            for(int i=0;i<len;i++){                //true occasion
                TreeNode *cur = myqueue.front();
                myqueue.pop();
                int pos;
                if(flag){
                    pos=i;
                }else{
                    pos=len-1-i;
                }
                tmp[pos]=cur->val;

                if (cur->left)
                    myqueue.push(cur->left);
                if (cur->right)
                    myqueue.push(cur->right);
            }
            flag=!flag;
            result.push_back(tmp);

        }
        return result;

    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}