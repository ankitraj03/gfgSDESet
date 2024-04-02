//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int a[], int n, int b[], int m)
	{
         int sum1=0,sum2=0;
        for(int i=0; i<n; i++)
        {
            sum1+=a[i];
        }
        for(int i=0; i<m; i++)
        {
            sum2+=b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0;
        while(i<n && j<m)
        {
           
            int tp1=sum1-a[i]+b[j];
            int tp2=sum2-b[j]+a[i];
            if(tp1==tp2)
            {
                return 1;
            }
            else if(tp1>tp2)
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return -1;
 
}
};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends