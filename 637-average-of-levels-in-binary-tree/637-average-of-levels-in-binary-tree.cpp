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
    vector<double> averageOfLevels(TreeNode* root) {
    
        vector<double> v;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()>0){
            double s = q.size();
            double avg=0; 
            for(int i=0; i<s; i++)
            {
            
            TreeNode* temp;
            temp = q.front();
            q.pop();
            if(temp!=NULL)
            {
            avg = avg + temp->val; 
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);        
            }
                
        }
            avg = avg/s;
            v.push_back(avg);
        
    }
        return v;
    }
};