class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        
     if(numRows==1) return {{1}}; 
     vector<vector<int>> temp = generate(numRows-1);
        int a = temp.size()-1;
        vector<int> sus;
        sus = temp[a];
        vector<int> ans;
        ans.push_back(1);
        for(int i=0; i<sus.size()-1; ++i){
            ans.push_back(sus[i]+sus[i+1]);
        }
        ans.push_back(1);
        temp.push_back(ans);
        return temp;
        
    }
};