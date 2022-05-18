class Solution {
public:
    vector<vector<string>> ans;

   void flans(vector<vector<int>>& board){
        vector<int> v=board[0];
        vector<string> t;
        for(int i=0;i<board.size();i++){
            string s;
            for(int j=0;j<board.size();j++){
                if(v[j]==i+1) s+="Q";
                else s+=".";
            }
            t.push_back(s);
        }
       ans.push_back(t);
    }

    vector<vector<int>> fill(int i,int j,vector<vector<int>> board,int n){
        for(int k=0;k<n;k++){ board[i][k]=i+1;}
        for(int k=0;k<n;k++){ board[k][j]=i+1;}
        for(int k=0;k<n-i && j+k<n;k++){ board[i+k][j+k]=i+1;}
        for(int k=0;k<n-i && j-k>=0;k++){ board[i+k][j-k]=i+1;}
        // flans(board);
        return board;
    }
    
    
    void mkboard(vector<vector<int>> board,int i,int n){
        if(i==n) { flans(board); return;}
        for(int j=0;j<n;j++){
            if(board[i][j]==0){
                mkboard(fill(i,j,board,n),i+1,n);
            }

        }
    };
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> board(n,vector<int> (n,0));
        mkboard(board,0,n);
        return ans;
    }

};