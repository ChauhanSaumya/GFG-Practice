class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int mx=arr[0],cur=0;
        for(auto x:arr)
        {
            cur+=x;
            if(cur>mx)mx=cur;
            if(cur<0)cur=0;
        }
        return mx;
    }
};