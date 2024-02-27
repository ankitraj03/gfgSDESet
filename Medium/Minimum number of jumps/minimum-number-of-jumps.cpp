//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
  
  // this is my code which is partially correct
    // int minJumps(int a[], int n){
    //     // Your code here
    //     int j=0;
    //     int size=a[0];
    //     int jump=0;
    //     int temp=0;
    //     for(j=1;j<=size;j++)
    //     {
    //         if(a[j]>size){
    //             temp=a[j];
    //         }
    //         if(j==size){
    //             size=size+temp;
    //             jump++;
    //         }
    //         if(size>n)
    //         return jump+1;
    //     }
    //     jump=-1;
    //     return jump;
    // }
    
    int minJumps(int a[], int n) {
    int jump = 0;
    int curEnd = 0;
    int curFarthest = 0;

    for (int i = 0; i < n - 1; i++) {
        curFarthest = max(curFarthest, i + a[i]);
        if (i == curEnd) {
            jump++;
            curEnd = curFarthest;
        }
    }

    if (curEnd >= n - 1) // If the last element is reachable
        return jump;
    else
        return -1; // If the last element is not reachable

}

};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends