class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        
        vector<vector<int>> ans;
        if(in.size()==0) return ans;
        sort(in.begin(), in.end());
        ans.push_back(in[0]);
        int j=0;
        for(int i=1; i<in.size(); ++i){
            if(ans[j][1]>=in[i][0]){
                ans[j][1] = max(ans[j][1], in[i][1]); 
            }
            else{
                j++;
                ans.push_back(in[i]);
            }
        }
        return ans;
    }
};