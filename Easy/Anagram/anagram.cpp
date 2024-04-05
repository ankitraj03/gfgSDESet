//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        if(a.size()!= b.size())
        return 0;
        map<char,int> mpp1;
        map<char,int> mpp2;
        
        for(int i=0;i<a.size();i++){
            mpp1[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            mpp2[b[i]]++;
        }
        
        int size=mpp1.size();
        int i=0;
        for (auto it = mpp1.begin(); it != mpp1.end(); ++it) {
            auto it2 = mpp2.find(it->first);
            if (it2 == mpp2.end() || it2->second != it->second) {
            return false;
            }
        }
        return 1;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends