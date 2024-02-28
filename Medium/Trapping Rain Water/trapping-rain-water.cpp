//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[], int n){
        // int maxi=0;
        // int maxj=0;
        // int max1=0;
        // int max2=0;
        // int sum=0;
        // for(int i=0;i<n;i++)
        // {
        //     max1=max(max1,a[i]);
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(a[i]==max1){
        //     maxi=i;
        //     continue;
        //     }
        //     else{
        //         max2=max(max2,a[i]);
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(a[i]==max2)
        //     maxj=i;
        // }
        
        // for(int i=maxj+1;i<maxi;i++)
        // {
        //     sum=sum+(max2-a[i]);
        // }
        // return sum;
        
        long long sum = 0;
    long long maxsum = 0;
    int left = 0, right = n - 1;
    int left_max = 0, right_max = 0;

    while (left <= right) {
        if (a[left] <= a[right]) {
            if (a[left] >= left_max)
                left_max = a[left];
            else
                sum += left_max - a[left];
            left++;
        } else {
            if (a[right] >= right_max)
                right_max = a[right];
            else
                sum += right_max - a[right];
            right--;
        }
        maxsum = max(maxsum, sum);
    }

    return maxsum;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends