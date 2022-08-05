class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& candidates, int i, vector<int>&sum, int target){
        
        if(target==0){
            ans.push_back(sum);
            return;
        }
        if(target<0) return;
        if(i==candidates.size()) return;      
        helper(candidates, i+1, sum, target);
        
        sum.push_back(candidates[i]);
        helper(candidates, i, sum, target-candidates[i]);
        sum.pop_back();
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> sum;
        helper(candidates, 0, sum, target);
        return ans;
        
    }
};