class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n=mat.size(),a=0,b=n-1;
        while(a<b)
        {
            if(mat[a][b])a++;
            else b--;
        }
        for(int x=0;x<n;x++)
        {
            if(x != a && (mat[a][x] || !mat[x][a])) return -1;
        }
        return a;
    }
};