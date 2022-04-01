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
    int minDepth(TreeNode* root) {
        int count=0;
        if(root==NULL) return count;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(q.size()>1){
            int s = q.size();
            count++;
            for(int i=0; i<s; ++i)
            {
                 TreeNode* temp = q.front();
                 q.pop();
                 if(temp!=NULL){
                     if(temp->left==NULL && temp->right==NULL) return count;
                     if(temp->left!=NULL) q.push(temp->left);
                     if(temp->right!=NULL) q.push(temp->right);
                
            }
                else q.push(NULL);
                
            }            
        }
        return count;
    }
};