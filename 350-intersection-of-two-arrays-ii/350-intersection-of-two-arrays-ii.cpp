class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //multiset<int> s1(nums1.begin(), nums1.end());
        unordered_map<int, int> mp;
        for (int i : nums1)
            mp[i]++;
        vector<int> v;
        for (int i : nums2)
            if (mp[i]-- > 0)
                v.push_back(i);
        return v;
        
    }
};