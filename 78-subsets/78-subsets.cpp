class Solution {
public:
    
    vector<vector<int>> ans;
    void helper(vector<int>& nums, int i, vector<int>& substrings){
        
        if(nums.size()==i){
            ans.push_back(substrings);
            return;
        }
        helper(nums, i+1, substrings);
        
        substrings.push_back(nums[i]);
        helper(nums, i+1, substrings);
        substrings.pop_back();
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> substrings;
        helper(nums, 0, substrings);
        return ans;
    }
};