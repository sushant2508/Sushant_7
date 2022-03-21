// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long count =0;
    long long toh(int N, int A, int C, int B) {
    
    if(N==1){
        cout<<"move disk "<<N<<" from rod "<<A<<" to rod "<<C<<endl;
        count++;
        return 1;
    }
    toh(N-1,A, B, C);
    
    cout<<"move disk "<<N<<" from rod "<<A<<" to rod "<<C<<endl;
    count++;
    toh(N-1, B, C, A);
    //cout<<count;
    return count;
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends