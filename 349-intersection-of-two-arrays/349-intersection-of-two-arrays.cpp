class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> s1;
        vector<int> v;
        for(int i=0; i<nums1.size(); ++i){
            for(int j=0; j<nums2.size(); ++j){
                if(nums1[i]==nums2[j]){
                    s1.insert(nums1[i]);
                }
            }
        }

        
    for(int value : s1){
        v.push_back(value);
    }
        
        return v;
    }
};