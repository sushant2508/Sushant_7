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
    int deepestLeavesSum(TreeNode* root) {
        
        vector<int> l;
        vector<int> r;
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int sum = root->val;
        while(q.size()>0){
            sum = 0;
            int s1 = q.size();
            for(int i=0; i<s1; ++i){
                TreeNode* temp=q.front();
                sum += temp->val;
                q.pop();
                if(i==0) l.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                
            }
        }
        return sum;
          
        
        
    }
};