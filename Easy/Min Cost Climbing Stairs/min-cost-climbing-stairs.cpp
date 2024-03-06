//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
  int solve(vector<int>&cost ,int n, vector<int> &dp)
  {
      if(n==0)
      return cost[0];
      
      if(n==1)
      return cost[1];
    // dp-step 3
    if(dp[n]!=-1)
    return dp[n];
      
    //   int ans=cost[n]+min(solve(cost,n-1),solve(cost,n-2));
    //dp-step 2
    dp[n]=cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    return dp[n];

  }
//     int minCostClimbingStairs(vector<int>&cost ,int n) {
//         Write your code here
//          using recursion(occur TLE)
//         int ans=min(solve(cost,n-1),solve(cost,n-2));
//         return ans;
//     }
    int minCostClimbingStairs(vector<int>&cost ,int n) {
        // using dp
        vector<int> dp(n+1,-1);
        int ans=min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends