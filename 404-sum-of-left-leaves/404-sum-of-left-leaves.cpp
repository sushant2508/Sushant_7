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
    int sumOfLeftLeaves(TreeNode* root) {
        
        if(!root) return 0;
        int ans=0;
        
        
        queue<TreeNode* > q;
        q.push(root);
        while(q.size()>0){
            
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                if(temp!=NULL && temp->left!=NULL  && temp->left->left==NULL && temp->left->right==NULL){
                    ans= ans+temp->left->val;
                }
            }
                 

        return ans;  
    }
};