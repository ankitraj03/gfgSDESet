//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // solution is correct but gives TLE
        // vector<int> ans;
        // int i=0,j=k-1,l=0;
        // int maxe=0;
        // while(j<n)
        // {
        //     maxe=max(a[i],maxe);
        //     if(i==j)
        //     {
        //         j++;
        //         l++;
        //         i=l;
        //         ans.push_back(maxe);
        //         maxe=0;
        //     }
        //     else{
        //     i++;
        //     }
        // }
        // return ans;
        
        
        //using dequeue
        //not mine 
         deque<int>dq;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!dq.empty()&& dq.front()==i-k){
                dq.pop_front();
            }
            while(!dq.empty()&&arr[i]>=arr[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                ans.push_back(arr[dq.front()]);
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends