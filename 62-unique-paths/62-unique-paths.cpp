class Solution {
public:
    int uniquePaths(int m, int n) {
        
        if(m==1 || n==1) return 1;
        else {
            m--;
            n--;
        }
        if(n>m){
            m = n+m;
            n = m-n;
            m = m-n;
        }
        long ans=1;
        int j=1;
        for(int i=m+1; i<=n+m; ++i, ++j){
           ans = ans*i;
            ans = ans/j;
    }
        return ans;
    }
};