class Solution {
  public:
    int count(vector<int>& coins, int sum) {
        // code here.
        vector<int> dp(sum+1);
        dp[0]=1;
        for(auto c:coins)
        {
            for(int x=c;x<=sum;x++)
                dp[x]+=dp[x-c];
        }
    return dp[sum];
    }
};