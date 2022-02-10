class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> v;
        for(auto i : nums2){
            if(s.erase(i)){
                v.push_back(i);
            }
        }
        return v;

        
//     for(int value : s1){
//         v.push_back(value);
//     }
        
//         return v;
    }
};