class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); ++i){
            
            mp[nums[i]]++;
            
        }
        
        for(auto value:mp){   
            if(value.second >1){
                return value.first;
            }
        }
        return 0;
        
    }
};