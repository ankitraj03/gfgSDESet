//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long int dp[1002][1002];
  long long int solve(int coins[], int n, int sum)
  {
      if(sum==0)
      {
          return 1;
      }
      if(n==0)
      {
          return 0;
      }
      if(dp[n][sum]!=-1)
      {
          return dp[n][sum];
      }
      if(coins[n-1]<=sum)
      {
          dp[n][sum]=solve(coins,n,sum-coins[n-1])+solve(coins,n-1,sum);
      }
      else
      {
          dp[n][sum]=solve(coins,n-1,sum);
      }
      return dp[n][sum];
  }
    long long int count(int coins[], int N, int sum) {

        // code here.
        memset(dp,-1,sizeof(dp));
        return solve(coins, N,sum);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends