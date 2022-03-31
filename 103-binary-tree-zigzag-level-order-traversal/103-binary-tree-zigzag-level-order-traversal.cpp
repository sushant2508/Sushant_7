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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {    
        
        vector<vector<int>> ans;
        vector<int> v;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int flag=1;
        while(q.size()>1){ 
            TreeNode* temp= q.front();
            q.pop();
            if(temp!=NULL){
                v.push_back(temp->val);
                    if(temp->left!=NULL) q.push(temp->left);
                    if(temp->right!=NULL) q.push(temp->right);                     
            }
            else{   
                 if(flag%2==0){
                     reverse(v.begin(), v.end());
                     ans.push_back(v);             
                 }
                else{
                ans.push_back(v);    
                }
                flag++;
                v.erase(v.begin(), v.end());
                q.push(NULL);
            }      
        }
         if(flag%2==0){
                     reverse(v.begin(), v.end());
                     ans.push_back(v);             
                 }
                else{
                ans.push_back(v);    
                }
        // reverse(v.begin(), v.end());
        // ans.push_back(v);
        return ans;
        
    }
};