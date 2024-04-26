//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& arr) {
        // Code here
         int i=0,j=0,prev_i,prev_j;
        int front=2;
        while(i<n&&j<m&&i>=0&&j>=0){
            prev_i=i;
            prev_j=j;
            if(arr[i][j]==0){
                if(front==2){
                    j++;
                }
                if(front==3){
                    i++;
                }
                if(front==4){
                    j--;
                }
                if(front==1){
                    i--;
                }
            }else {
                arr[i][j]=0;
                if(front==2){
                    i++;
                    front=3;
                }else
                if(front==3){
                    j--;
                    front=4;
                }else
                if(front==4){
                    i--;
                    front=1;
                }else
                if(front==1){
                    j++;
                    front=2;
                }
                
            }
        }
        return {prev_i,prev_j};
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
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends