//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
 int binarysearch(vector<int> &arr, int k) {
   int n = arr.size();
        int l = 0;
        int h = n - 1;
        int result = -1; // Variable to store the last occurrence index

        while (l <= h) {
            int m = (l + h) / 2;

               while (l <= h) {
            int m = (l + h) / 2;

            if (arr[m] == k) {
                result = m; // Update result to the current index
                h = m - 1; // Continue searching in the left half
            } else if (k > arr[m]) {
                l = m + 1; // Search in the right half
            } else {
                h = m - 1; // Search in the left half
            }
        }
    return result; // Return the last occurrence index or -1 if not found
    }
 }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int res = ob.binarysearch(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends