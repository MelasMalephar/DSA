class Solution {
public:
    
    bool isCyclic(vector<vector<int>> &adj, vector<int> &visited,int curr){
        if(visited[curr]==2)return true;
        
        visited[curr]=2;
        for(int i=0;i<adj[curr].size();i++){
            if(visited[adj[curr][i]]!=1){
                if(isCyclic(adj,visited,adj[curr][i]))
                    return true;
            }
        }
        visited[curr]=1;
        return false;
    }
    
    bool canFinish(int n /*numCourses*/, vector<vector<int>>& p /*prerequisites*/) {
        vector<vector<int>> adj(n);
        for(int i=0;i<p.size();i++){
            adj[p[i][0]].push_back(p[i][1]);
        }
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                if(isCyclic(adj,visited,i))
                    return false;
            }
        }
        return true;
    }
};