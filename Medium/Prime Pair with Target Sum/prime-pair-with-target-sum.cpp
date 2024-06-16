//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    vector<int> getPrimes(int n) {
        // code here
        vector<int> ans;
        for(int i=2;i<=n/2;++i){
            if(isprime(i) && isprime(n-i)){
                ans.push_back(i);
                ans.push_back(n-i);
                break;
            }
           
        }
        if(ans.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
    bool isprime(int num){
       if (num <= 1)
        return false;
       if (num == 2)
        return true;
       if (num % 2 == 0)
        return false;

        for (int i = 3; i * i <= num; i += 2) {
            if (num % i == 0)
                return false;
        }
    return true;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends