class Solution {
  public:
    int kadane(vector<int>&a)
    {
        int mx=a[0],s=a[0];
        for(int i=1;i<a.size();i++)
        {
            s=max(a[i],s+a[i]);
            mx=max(mx,s);
        }
        return mx;
    }
    int maxRectSum(vector<vector<int>> &mat) {
        // code here
        int n=mat.size(),m=mat[0].size(),ans=mat[0][0];
        for(int l=0;l<m;l++)
        {
            vector<int>tmp(n,0);
            for(int r=l;r<m;r++)
            {
                for(int i=0;i<n;i++) tmp[i]+=mat[i][r];
                ans=max(ans,kadane(tmp));
            }
        }
        return ans;
    }
};
