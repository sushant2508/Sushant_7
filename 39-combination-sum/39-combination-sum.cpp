class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(vector<int> &candidates, vector<int> subset, int target, int i){    
        if(target==0){
            ans.push_back(subset);
            return;
        }
        if(target<0) return;
        if(i==candidates.size()) return;
      helper(candidates, subset, target, i+1); 
        
        subset.push_back(candidates[i]);
        helper(candidates, subset, target-candidates[i], i);
        subset.pop_back();     
    } 
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {    
        vector<int> subset;
        helper(candidates, subset, target, 0);
        return ans;
    }
};