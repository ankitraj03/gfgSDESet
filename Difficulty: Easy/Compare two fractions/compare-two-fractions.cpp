//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

     string compareFrac(string num) {
    string value[4];   
    int i=0;int k=0;string ans="";
    
    while(i<num.size())
    {
        if(num[i]=='/'||num[i]==',')
        {
            i++;
            k++;
        }
        else if(isspace(num[i]))
        i++;
        else
        {
            value[k]=value[k]+num[i];
            i++;
        }
    }
long double result1=stold(value[0])/stold(value[1]);
long double result2=stold(value[2])/stold(value[3]);

if(result1>result2)
return ans+value[0]+"/"+value[1];
 else if(result1<result2)
return ans+value[2]+"/"+value[3];
else
return "equal";
}
    
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends