//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    int f(int arr[], int pages, int n)
    {
        int students=1;
        int curr=0;
    
        for(int i=0;i<n;i++)
        {
            if(arr[i]+curr > pages)
            {
                students++;
                curr = arr[i];
            }
    
            else
            {
                curr += arr[i];
            }
        }
    
        return students;
    }

    // Function to find minimum number of pages
    int findPages(int arr[], int n, int m) {
        // If number of books is less than number of students, not possible
        if (m > n) return -1;

        int low = -1;
        int high= 0;
        
        for(int i=0;i<n;i++)
        {
            low = max(low, arr[i]);
            high += arr[i];
        }
    
        while(low <= high)
        {
            int mid = low + (high-low)/2;
    
            if(f(arr,mid,n) > m)  low=mid+1;
            else    high=mid-1;
        }
    
        return low;
    }
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends