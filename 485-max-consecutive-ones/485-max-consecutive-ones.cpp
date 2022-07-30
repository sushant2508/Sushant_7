class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=0;
        int ans=0;
        
        for(int i=0; i<nums.size(); ++i){
            if(nums[i]==1) curr++;
            else{
                ans= max(ans,curr);
                curr=0;
            }
        }
        return max(ans,curr);
    }
};