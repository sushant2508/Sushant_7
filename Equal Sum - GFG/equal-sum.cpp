// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int *arr, int n) {
        //vector<int> v1(n);
        int v1[n];
        int v2[n];
        //vector<int> v2(n);
        string ans="NO";
        if(n>2){
        v1[0]=0;
        v2[n]=0;
        for(int i=0; i<n; ++i){
        v1[i+1]=v1[i]+arr[i];
        }
        for(int i=1; i<=n; ++i){
            v2[n-i]=arr[n-i]+v2[n-i+1];
        }
        for(int i=0; i<n-1; ++i){
            if(v1[i]==v2[i+1]){
                ans="YES";
            }
        }
		return ans;
    }
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends