//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        
        if(n==1)
        return 1;
    
        // Your code here
        long long sumL=0;
        long long sumR=0;
        int i=0;
        for(int j=0;j<n;j++)
        {
            sumR=sumR+a[j];
        }
        while(i<n){
           if(sumL<sumR){
               sumR=sumR-a[i];
           }
           if(sumR==sumL){
               return i+1;
           }
           else if(sumL>sumR)
           {
               return -1;
           }
          sumL=sumL+a[i];
          i++;
        }
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends