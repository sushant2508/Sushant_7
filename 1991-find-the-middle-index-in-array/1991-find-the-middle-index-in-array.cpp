class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         vector<int> ans(100000);
        vector<int> rev(100000);
        int flag= -1;
        ans[0]= 0;
        rev[nums.size()]= 0;
        rev[nums.size()-1]= nums[nums.size()-1]; 
         if (nums.size() == 0)
            return -1;
        else if (nums.size() == 1)
            return 0;     
         for(int i=0; i<nums.size(); ++i)
             {
               ans[i+1]= ans[i] + nums[i];
               }
        for(int i= nums.size(); i>0; --i)
              {
               rev[i-1] = rev[i] + nums[i-1]; 
              }
        for(int i=0; i<nums.size(); ++i){
             if(ans[i]==rev[i+1]){
                 flag = i;
                 break;
               }
               }   
            return flag;
        }      
};