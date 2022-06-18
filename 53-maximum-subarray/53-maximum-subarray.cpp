class Solution {
public:
    int maxSubArray(vector<int>& nums) { /// KADANE ALGO
     
        int curr=0;
        int sum = INT_MIN;
        for(int i=0; i<nums.size(); ++i){
            curr = curr +nums[i];
            sum = max(curr, sum);
            if(curr<0) curr=0;
        }
        return sum;
    }
};