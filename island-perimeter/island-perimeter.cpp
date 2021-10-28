class Solution {
public:
    int islandPerimeter(vector<vector<int>>& v) {
      int n=v.size()-1;
        int p=0,k;
      for(int i=0;i<=n;i++)
      { k=v[i].size()-1;
          for(int j=0;j<=k;j++)
              if(v[i][j]==1)
              {
                  p+=4;
                  if(j>0 && v[i][j-1]==1) p--;
                  if(j<k && v[i][j+1]==1) p--;
                  if(i>0 && v[i-1][j]==1) p--;
                  if(i<n && v[i+1][j]==1) p--;
              }
      }
        return p;
    }
};