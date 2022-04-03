/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //int tsum=0;
     int sumNumbers(TreeNode* root) {
        return help(root,0);
    }

    int help(TreeNode* root,int curr){
        if(root==NULL) return 0;
        
        int tsum = curr*10 + root->val;
        if(root->left==NULL && root->right==NULL)
            return tsum;
        
        return help(root->left, tsum) + help(root->right, tsum);
        
        
    }
};