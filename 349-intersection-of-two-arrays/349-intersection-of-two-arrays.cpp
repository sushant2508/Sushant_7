class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> v;
        for(auto value : nums2){
            if(s.erase(value)){
                v.push_back(value);
            }
        }
        return v;

        
//     for(int value : s1){
//         v.push_back(value);
//     }
        
//         return v;
    }
};