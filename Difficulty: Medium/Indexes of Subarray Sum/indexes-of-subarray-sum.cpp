class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n=arr.size(),l=0,s=0;
        for(int r=0;r<n;r++)
        {
            s+=arr[r];
            while(s>target && l<=r) s -= arr[l++];
            if(s==target)return {l+1,r+1};
        }
        return {-1};
    }
};