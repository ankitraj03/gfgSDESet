//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int i=0,j;
        int temp=0;
        int ans=0;
        if(str[0]=='-')
        i++;
        while(i<str.length())
        {
            if(str[i]>=48 && str[i]<=57){
                temp=str[i]-48;
                ans=ans*10+temp;
            }
            else 
            return -1;
            
            i++;
        }
        if(str[0]=='-')
        return ans*-1;
        
        return ans;
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		int ans=ob.atoi(s);
		cout<<ans<<endl;
	}
}
// } Driver Code Ends