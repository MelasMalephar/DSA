class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<vector<int>> graph(n);
        vector<int> indegree(n, 0), ans; //keeps count of the number of edges approaching a node
        
        for(auto x : p){
            graph[x[1]].push_back(x[0]);
            indegree[x[0]]++;
        }
        
        queue<int> q;
        for(int i=0; i<n; i++){
            if(indegree[i]==0) q.push(i); //If a node has 0 indegree, we start from that node or that's the first course to be taken up.
        }
        
        while(q.size()){
            int curr = q.front(); q.pop();
            ans.push_back(curr);
            
            for(auto child : graph[curr]){
                if(--indegree[child] == 0) q.push(child); //As we move towards the child nodes, we decrement the indegree and keep on doing this until we've reached all the nodes
            }
        }
        
        return ans.size() == n ? ans : vector<int>(); //If ans.size() != n, then a cycle exists.
    }
};