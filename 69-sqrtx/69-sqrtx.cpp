class Solution {
public:
    int mySqrt(int x) {
        
        double l=1, r = x;
        double mid;
        while(r-l>1e-6){
            mid = l + (r-l)/2;
            if(mid*mid<x){
                l = mid;  
            }
            else r = mid;
        }
        return r;  
    }
};