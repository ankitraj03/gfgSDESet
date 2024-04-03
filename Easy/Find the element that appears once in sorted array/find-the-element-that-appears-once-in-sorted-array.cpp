//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        map<int,int> ans;
        for(int i=0;i<n;i++){
            ans[arr[i]]++;
        }
        for(auto x: ans){
            if(x.second==1){
                return x.first;
            }
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends