class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         
        unordered_map<int, int> mp;
        //vector<int> v;
        for(int i=0; i<nums.size(); ++i){
            
            if(mp.find(nums[i]) != mp.end()){
                if(abs(mp[nums[i]] - i)<=k)
                    return true;
            }
            //  for(auto value : mp){
            //     if(value.second==nums[i] && (abs(value.first-i)<=k))
            //         return true;
            // }   
            mp[nums[i]]= i;   
        }
        return false;
        
        
        
    }
};