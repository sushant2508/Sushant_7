class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        int temp=0;
        for(int i=0; i<gain.size(); ++i)
        {  
            temp=gain[i] + temp;
            ans = max(temp,ans);
        }
        return ans;
    }
};