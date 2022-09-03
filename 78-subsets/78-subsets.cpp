class Solution {
public:
    
    vector<vector<int>> ans;
    
    void helper(vector<int>& nums, vector<int> subset, int i){
        if(i==nums.size()){
            ans.push_back(subset);
            return;
        }
        helper(nums, subset, i+1);
        
        subset.push_back(nums[i]);
        helper(nums, subset, i+1);
        subset.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> subset;
        helper(nums, subset, 0);
        return ans;
    }
};