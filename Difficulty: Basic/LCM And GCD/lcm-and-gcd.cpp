//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    
    long long gcdhelp(int a,int b)
    {
        while(a>0 && b>0)
        {
            if(a>b) a=a%b;
            else b=b%a;
        }
        if(a==0) return b;
        else return a;
    }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        long long gcd=gcdhelp(a,b);
        long long lcm=(a*b)/gcd;
        vector<int> result;
        result.push_back(lcm);
        result.push_back(gcd);
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends