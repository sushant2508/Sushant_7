class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int r = nums.size()-1;
        if(nums.size()==1) return nums[0];
        
        while(l<=r){
            if(nums[l]==nums[l+1]){
                l++;
                l++;
            }
            else return nums[l];
            if(nums[r]==nums[r-1]){
                r--;
                r--;
            }
            else return nums[r];
        }
        return 0;
        
    }
};