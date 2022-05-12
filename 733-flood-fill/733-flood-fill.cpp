class Solution {
public:
    void recfill(vector<vector<int>>& image, int x, int y, int newColor,int p,vector<vector<bool>>& visited) {
        if(x<0 || y<0 || x>=image.size() || y>=image[0].size()) return ;
        if(visited[x][y]==true) return ;
        if(image[x][y]==p){
            image[x][y]=newColor;
            visited[x][y]=true;
            recfill(image,x-1,y,newColor,p,visited);
            recfill(image,x,y-1,newColor,p,visited);
            recfill(image,x+1,y,newColor,p,visited);
            recfill(image,x,y+1,newColor,p,visited);
        }

    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& v, int sr, int sc, int newColor) {
        vector<vector<bool>> visited(v.size(),vector<bool> (v[0].size(),false));
        recfill(v,sr,sc,newColor,v[sr][sc],visited); 
        return v;
    }
};