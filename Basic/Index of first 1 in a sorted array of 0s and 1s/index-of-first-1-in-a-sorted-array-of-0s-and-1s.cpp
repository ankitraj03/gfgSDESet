//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        // Your code goes here
        int low=0,high=n-1;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(a[mid]==0){
                if(a[mid+1]==1)
                return mid+1;
                
                else
                low=mid+1;
            }
            else if(a[mid]==1){
                if(a[mid-1]==0)
                return mid;
                
                else
                high=mid-1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}
// } Driver Code Ends