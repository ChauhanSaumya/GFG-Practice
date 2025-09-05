class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size(),l=0,r=n-1,lmx=0,rmx=0,ans=0;
        while(l<r)
        {
            if(arr[l]<arr[r])
            {
                lmx=max(lmx,arr[l]);
                ans+=lmx-arr[l];
                l++;
            }
            else
            {
                rmx=max(rmx,arr[r]);
                ans+=rmx-arr[r];
                r--;
            }
        }
        return ans;
    }
};