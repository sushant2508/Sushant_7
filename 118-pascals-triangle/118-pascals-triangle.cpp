class Solution {
public:
    vector<vector<int>> generate(int num) {    
    
        vector<vector<int>> ans;
        vector<int> v;
        vector<int> b;
        if(num==1){
            return {{1}};
        }
        if(num==2){
            return {{1}, {1,1}};
        }
        ans = (generate(num-1));
        v = ans[ans.size()-1];
        b.push_back(1);
        for( int i=1; i<v.size(); ++i){
            b.push_back(v[i-1] + v[i]);
        }
        b.push_back(1);
        ans.push_back(b);
        return ans;
        
    }
};