class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& candidates, int ind, vector<int> &sum, int target){
         
        if(target==0){
            ans.push_back(sum);
            return;
        }
        //  if(target<0) return;
        // if(ind==candidates.size()) return; 
        
       for(int i=ind; i<candidates.size(); ++i){
           if(i>ind && candidates[i]==candidates[i-1]) continue;
           if(candidates[i]>target) break;
           sum.push_back(candidates[i]);
           helper(candidates, i+1, sum, target-candidates[i]);
           sum.pop_back();
       }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> sum;
        sort(candidates.begin(), candidates.end());
        helper(candidates, 0, sum, target);
        return ans;
    }
};