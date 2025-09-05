// User function template for C++

class Solution {
  public:
    int lengthOfLongestAP(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n<=2)return n;
        vector<map<int,int>>dp(n);
        int ans=2;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int d=arr[i]-arr[j];
                int t=2;
                if(dp[j].count(d)) t=dp[j][d]+1;
                dp[i][d]=t;
                if(t>ans)ans=t;
            }
        }
        return ans;
    }
};