class Solution {
public:
    int x=0;

    vector<vector<int>> fill(int i,int j,vector<vector<int>> board,int n){
        for(int k=0;k<n;k++){ board[i][k]=i+1;}
        for(int k=0;k<n;k++){ board[k][j]=i+1;}
        for(int k=0;k<n-i && j+k<n;k++){ board[i+k][j+k]=i+1;}
        for(int k=0;k<n-i && j-k>=0;k++){ board[i+k][j-k]=i+1;}
        return board;
    }
    
    
    void mkboard(vector<vector<int>> board,int i,int n){
        if(i==n) { x++; return;}
        for(int j=0;j<n;j++){
            if(board[i][j]==0){
                mkboard(fill(i,j,board,n),i+1,n);
            }

        }
    };
    
    
    int totalNQueens(int n) {
        vector<vector<int>> board(n,vector<int> (n,0));
        mkboard(board,0,n);
        return x;
    }
};