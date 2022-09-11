class Solution {
public:
    
    vector<vector<int>> ans;
    void helper(vector<int> &ds, vector<int> &nums, int fre[]){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }       
        for(int i=0; i<nums.size(); ++i){     
            if(fre[i]==0){
                ds.push_back(nums[i]);
                fre[i]=1;
                helper(ds, nums, fre);
                fre[i]=0;
                ds.pop_back();
            }
        }    
    }
    vector<vector<int>> permute(vector<int>& nums) {  
        vector<int> ds;
        int fre[nums.size()];
        for(int i=0; i<nums.size(); ++i) fre[i]=0;
        helper(ds, nums, fre);
        return ans;    
    }
};