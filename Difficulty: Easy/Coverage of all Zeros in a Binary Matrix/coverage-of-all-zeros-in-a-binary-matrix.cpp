//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        int i=0, j=0;
        int ans=0;
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    if(i-1>=0 && matrix[i-1][j] == 1)
                        ans++;
                    
                    if(j-1>=0 && matrix[i][j-1] == 1)
                        ans++;
                    
                    if(i+1<matrix.size() && matrix[i+1][j] == 1)
                        ans++;
                    
                    if(j+1<matrix[0].size() && matrix[i][j+1] == 1)
                        ans++;
                   
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends