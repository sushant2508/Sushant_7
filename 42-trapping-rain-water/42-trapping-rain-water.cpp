class Solution {
public:
    int trap(vector<int>& height) {
        int w=0;
        int t;
        t=height.size();
        vector<int> maxl(t);
        vector<int> maxr(t);
        maxl[0]=height[0];
        maxr[t-1]=height[t-1];        
        for(int i=1; i<t; ++i){
            maxl[i]=max(height[i],maxl[i-1]);
        }
        for(int i=t-2; i>0; --i){
            maxr[i] = max(height[i+1],maxr[i+1]);
        }
        
        for(int i=0; i<t-1; ++i){
            if(maxl[i]>height[i+1] && maxr[i+1]>height[i+1]){
                w= (min(maxl[i],maxr[i+1])-height[i+1]) + w;
            }
        }
    return w;       
    }
};