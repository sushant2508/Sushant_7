class Solution {
public:
    int majorityElement(vector<int>& nums) {     
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); ++i)
        {
            mp[nums[i]]++;
        }
        int ans=INT_MIN;
        int tgt;
        for(auto value : mp){
            ans = max(value.second,ans);
            if(ans==value.second){
                tgt = value.first;
            }                        
        }
        return tgt;               
    }
};