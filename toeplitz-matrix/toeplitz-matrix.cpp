class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) {
        // cout<<m.size()   3<<" "<<m[0].size()  4;
        for(int i=0;i<m[0].size();i++)
        {   int j=0,k=i;
            while(j<m.size()-1 && k<m[0].size()-1){ 
                if(m[j][k]!=m[j+1][k+1]) { return false;}
                j++; k++;
            }
        }
        for(int i=1;i<m.size();i++)
        {   int j=0,k=i;
            while(j<m[0].size()-1 && k<m.size()-1){ 
                if(m[k][j]!=m[k+1][j+1]) { return false;}
                j++; k++;
            }}
      return true;
    }
};