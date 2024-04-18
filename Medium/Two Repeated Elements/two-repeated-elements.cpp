//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<n+2;i++){
            mp[arr[i]]++;
        }
        
        for(auto & pair:mp){
            if(pair.second==2){
                ans.push_back(pair.first);
                pair.second--;
            }
        }
        int count1=0;
        int count2=0;
        for(int i=0;i<n+2;i++){
            if(arr[i]==ans[0])
            count1++;
            
            else if(arr[i]==ans[1])
            count2++;
            
            if(count1==2)
            return ans;
            
            else if(count2==2)
            {
               reverse(ans.begin(),ans.end());
                return ans;;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends