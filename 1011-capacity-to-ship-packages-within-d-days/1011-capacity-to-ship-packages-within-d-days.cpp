class Solution {
public:  
    int predicate(vector<int>& weights, int days, int mid){   
        int v=1;
        int sum =0;
        int i=0;
        for(i; i<weights.size(); ++i){
            if(weights[i]>mid) return 0;
            if(sum + weights[i] <=mid){
                sum = sum + weights[i];
            }
            else {
                ++v;
                sum=weights[i];
                if(v> days) return 0;               
            }          
        }
        return 1;    
    }    
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int r=1e8, l=0, mid;   
        while(r-l>1){        
            mid = (l+r)/2;
            if(predicate(weights, days, mid)){
                r =mid;
            }
            else l = mid;        
        }
        return r;        
        }
};