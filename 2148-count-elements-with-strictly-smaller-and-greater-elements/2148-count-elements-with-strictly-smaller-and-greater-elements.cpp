class Solution {
public:
    int countElements(vector<int>& nums) {
        
        map<int, int> mp;
        vector<int> v;
        int ans=0;
        for(int i=0 ; i<nums.size(); ++i){
            mp[nums[i]]++;
        }
      for(auto value : mp){
          v.push_back(value.second);
      }
        for(int i=1; i<v.size()-1; ++i){
            ans = ans + (v[i]);
        }
        
        return ans;
        
        
    }
};