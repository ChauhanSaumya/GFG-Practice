class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> ans(n,1);
        stack <int> s;
        for(int i=0;i<n;++i)
        {
            while(!s.empty() && arr[s.top()] <= arr[i]) s.pop();
            ans[i] = s.empty()?i+1 : i-s.top();
            s.push(i);
        }
        return ans;
    }
};