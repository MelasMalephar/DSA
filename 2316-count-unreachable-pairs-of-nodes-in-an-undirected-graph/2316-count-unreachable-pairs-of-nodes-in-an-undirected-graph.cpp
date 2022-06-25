class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
         vector<long long> conn;
         vector<int> ed[n+1];
         for(int i=0; i<edges.size(); i++) {
              ed[edges[i][0]].push_back(edges[i][1]);
              ed[edges[i][1]].push_back(edges[i][0]);
         }
         vector<int> vis(n+1,false);
         for(int i=0; i<n; i++) {
              if(!vis[i]) {
                   queue<int> q;
                   q.push(i);
                   vis[i]=1;
                   int nodes= 1;
                   while(!q.empty()) {
                       int p = q.front();
                       q.pop();
                       for(int e = 0; e<ed[p].size(); e++) {
                            int nxt = ed[p][e];
                            if(!vis[nxt]) {
                                vis[nxt]=1;
                                q.push(nxt);
                                nodes++;
                            }
                       }
                   }
                  conn.push_back(nodes);
              }
         }
        long long ans = 0;
        vector<long long> pf(conn);
        for(int i=pf.size()-1; i>0; i--) pf[i-1]+=pf[i]; 
        for(int i=0; i<conn.size()-1; i++) ans+=conn[i]*(pf[i+1]);
        return ans;
    }
};