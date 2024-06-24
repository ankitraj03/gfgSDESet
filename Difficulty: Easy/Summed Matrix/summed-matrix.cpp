//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        int i, j;
        if(q == 1 || q > 2*n)
            return 0;
            
        long long midCnt = n;
        long long midEle = n+1;
        
        long long ans = 0;
        
        if(q >= midEle){
            ans = midCnt - q + midEle;
        }
        else{
            ans = midCnt - midEle + q;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends