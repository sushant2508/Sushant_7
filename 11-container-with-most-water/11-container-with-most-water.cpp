class Solution {
public:
    int maxArea(vector<int>& height) {
        
       int n=height.size();
        int i=0;
        int j=n-1;
        int ans=0;
        while(i<j){
            int temp=min(height[i],height[j])*(j-i);
            if(temp>ans) ans=temp;
            if(height[i]>height[j]) j--;
            else i++;
        }
        return ans;
        
        
    }
};