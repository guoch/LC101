/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode *> myqueue;
        vector<int> result;
        if(root==NULL)
            return {};
        myqueue.push(root);
          //[3,9,20,null,null,15,7]
        while(!myqueue.empty()){
            int len=myqueue.size();    //1         not change the order
            //same order as, keep different order in the array not tree
            vector<int> tmp(len);
            for(int i=0;i<len;i++){                //true occasion
                TreeNode *cur = myqueue.front();
                myqueue.pop();
                tmp[i]=cur->val;
                if (cur->left)
                    myqueue.push(cur->left);
                if (cur->right)
                    myqueue.push(cur->right);
            }
            result.push_back(tmp[tmp.size()-1]);
        }
        return result;

    }
};
