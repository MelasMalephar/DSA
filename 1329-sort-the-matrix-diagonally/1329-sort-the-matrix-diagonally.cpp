class Solution {
public:
    void help(int x,int y,int row,int col,vector<vector<int>> &mat){
        vector<int> s;
        int i=y;
        int j=x;
        while(x<row && y<col){
                s.push_back(mat[x][y]);
                x++;
                y++;
            }
        x=j;y=i;
        int t=0;
        sort(s.begin(),s.end());
        while(x<row && y<col){
                mat[x++][y++]=s[t++];
        }
    }
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row=mat.size(),col=mat[0].size();
        for(int i=0;i<col;i++){
            help(0,i,row,col,mat);
        }
        for(int j=1;j<row;j++){
            help(j,0,row,col,mat);
        }
        return mat;
    }
};