class Solution {
public:
    int diff(string &a,string &b){
        int c=0;
        for(int i=0;i<8;i++){
            if(a[i]!=b[i])c++;
        }
        return c;
    }
    
    vector<string> lcs(string chk,unordered_set<string> &s){
        vector<string> ans;
        for(auto c:s){
            if(diff(c,chk)==1)ans.push_back(c);
        }
        return ans;
    }
    
    
    int minMutation(string start, string end, vector<string>& v) {
        unordered_set<string> s(v.begin(),v.end());
        if(s.count(end)==0) return -1;
        // s.insert(start);
        int ans=-1;
        queue<string> q;
        q.push(start);
        while(!q.empty()){
            int n=q.size();
            ans++;
            int flag=0;
            for(int i=0;i<n;i++){
                string g=q.front();
                vector<string> t=lcs(g,s);
                if(g==end) return ans;
                s.erase(g);
                q.pop();
                if(t.size()!=0){
                    flag++;
                    for(auto c:t){q.push(c);}
                }
            }
            if(flag==0) return -1;
        }
        return ans;
    }
};