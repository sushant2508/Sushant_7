class Solution {
public:
    
    vector<vector<int>> ans;
    void gen(vector<int>& subset, int i, vector<int>& nums){
        
        if(i==nums.size()){
            ans.push_back(subset);
            return;
        }
        gen(subset, i+1, nums);
        
        subset.push_back(nums[i]);
        gen(subset, i+1, nums);
        subset.pop_back();
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> subset;
        gen(subset, 0, nums);
        return ans;
        
    }
};