//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        vector<int> bit(32,0);
        int index=31;
        while(x>0 && index>=0){
            bit[index]=x%2;
            x/=2;
            index--;
        }
        
        long long ans=0;
        for(int i=31;i>=0;i--){
            long long temp=(pow(2,i)*bit[i]);
            ans+=temp;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends