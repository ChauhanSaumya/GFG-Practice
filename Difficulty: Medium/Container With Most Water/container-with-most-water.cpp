class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int l=0,r=arr.size()-1;
        int mx=0;
        while(l<r)
        {
            int w=r-l;
            int h=min(arr[l],arr[r]);
            mx=max(mx,w*h);
            if(arr[l] < arr[r]) l++;
else r--;
        }
        return mx;
    }
};