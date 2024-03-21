//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
 int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> sorted(n);
        int swaps = 0;
        for(int i=0; i<n; i++){
            sorted[i] = nums[i];
        }
        sort(sorted.begin(), sorted.end());
        for(int i=0; i<n; i++){
            mp[sorted[i]] = i;
        }
        
        int i=0;
        while(i<n){
           if(mp[nums[i]] != i){
           swap(nums[i], nums[mp[nums[i]]]);
           swaps++;
        }
        else i++;
        }
        return swaps;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends