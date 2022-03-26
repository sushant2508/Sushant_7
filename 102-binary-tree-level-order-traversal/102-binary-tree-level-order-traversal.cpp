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
    vector<vector<int>> levelOrder(TreeNode* root) {  
        vector<vector<int>> ans;
        queue<TreeNode* > q;
        vector<int> v;
        if(!root) return ans;
        
        q.push(root);
        q.push(NULL);   
        //N
        //v 15 7
        //3,9 20
        while(q.size()>1){     
            TreeNode* temp = q.front();
            if(temp!=NULL){
                v.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);  
            }
            else {
                ans.push_back(v);
                v.clear();
                q.push(NULL);
            }
            q.pop();                   
        }
        ans.push_back(v);
        return ans;       
    }
};