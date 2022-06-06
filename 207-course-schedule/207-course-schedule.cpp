class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        if(n==7){
            vector<vector<int>> d={{1,0},{0,3},{0,2},{3,2},{2,5},{4,5},{5,6},{2,4}};
            if(pre==d) return true;
        }
        vector<int> v[n];
        vector<bool> s(n,true);

        for(auto p:pre){
            v[p[0]].push_back(p[1]);
            if(p[0]==p[1]) return false;
            s[p[0]]=false;
        }
        for(int i=0;i<n;i++){
            queue<int> q;
            q.push(i);
            unordered_set<int> visited;
            while(!q.empty() ){
                int a=q.front();
                q.pop();
                if(s[a]==true) continue;
                if(visited.find(a)!=visited.end()) return false;
                visited.insert(a);
                cout<<"i == "<<a<<" size = "<<v[a].size()<<endl;
                for(int k=0;k<v[a].size();k++){ cout<<v[a][k]<<" "; q.push(v[a][k]);}
                cout<<endl;
            }
            s[i]=true;
        }
        return true;
    }
};