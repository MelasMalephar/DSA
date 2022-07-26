class Solution {
public:
    int totalFruit(vector<int>& v) {
        int mx=0;
        unordered_map<int,int> mp;
        int j=0;
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
            while(mp.size()>2){
                mp[v[j]]--;
                if(mp[v[j]]==0)mp.erase(v[j]);
                j++;
            }
            int t=0;
            for(auto [k,l]:mp){ t+=l;}
            mx=max(mx,t);
        }
        return mx;
    }
};