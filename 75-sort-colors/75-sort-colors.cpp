class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        map<int, int> mp;
        for(int i=0; i<nums.size(); ++i){    
            mp[nums[i]]++;  
        }
        vector<int> ans;
        for(auto value:mp){
          for(int i=0; i<value.second; ++i){
              ans.push_back(value.first);
          }  
        }
        nums = ans;
        
        
    }
};