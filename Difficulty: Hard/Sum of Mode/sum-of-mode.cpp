class Solution {
  public:
    int sumOfModes(vector<int>& arr, int k) {
        // code here
        map<int,int>f;
        map<int,set<int>>g;
        int mx=0,ans=0,n=arr.size();
        for(int i=0;i<k;++i)
        {
            int x=arr[i];
            g[f[x]].erase(x);
            f[x]++;
            g[f[x]].insert(x);
            mx=max(mx,f[x]);
        }
        ans+=*g[mx].begin();
        for(int i=k;i<n;i++)
        {
            int x=arr[i-k],y=arr[i];
            g[f[x]].erase(x);
            if(g[f[x]].empty() && mx==f[x])mx--;
            f[x]--;
            if(f[x]) g[f[x]].insert(x);
            g[f[y]].erase(y);
            f[y]++;
            g[f[y]].insert(y);
            mx=max(mx,f[y]);
            ans+=*g[mx].begin();
        }
        return ans;
    }
};