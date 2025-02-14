//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int n=arr.size();
        int mini=arr[0];
        int maxi=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]<mini)
            {
                    mini=arr[i];
            }
            if(arr[i]>maxi)
            {
                    maxi=arr[i];
            }
        }
        return make_pair(mini,maxi);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<int, int> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends