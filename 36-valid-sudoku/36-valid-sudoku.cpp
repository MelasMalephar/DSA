class Solution {
public:
    bool chkrow(vector<vector<char>>& v){
        for(int i=0;i<9;i++){
            int arr[9]={0,0,0,0,0,0,0,0,0};
            for(int j=0;j<9;j++){
                char c=v[i][j];
                // cout<<c<<" ";
                if(c!='.'){
                    if(arr[c-'0'-1]==0) arr[c-'0'-1]++;
                    else return false;
                }
            }
            // cout<<endl;
        }
        return true;
    }
    
     bool chkcol(vector<vector<char>>& v){
        for(int i=0;i<9;i++){
            int arr[9]={0,0,0,0,0,0,0,0,0};
            for(int j=0;j<9;j++){
                char c=v[j][i];
                if(c!='.'){
                    if(arr[c-'0'-1]==0) arr[c-'0'-1]++;
                    else return false;
                }
            }
        }
        return true;
    }
    
    bool chkmat(vector<vector<char>>& v){
       for(int l=0;l<3;l++){ 
        for(int i=0;i<3;i++){
          int arr[9]={0,0,0,0,0,0,0,0,0};   
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                   char c=v[i*3+j][l*3+k];
                   // cout<<c<<" "; 
                   if(c != '.'){
                       if(arr[c-'0'-1]==0){ arr[c-'0'-1]++;}
                       else return false;
                   } 
                }
            }
         }
       }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) { 
        return chkrow(board) && chkcol(board) && chkmat(board);
    }
};