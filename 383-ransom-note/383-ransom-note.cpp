class Solution {
public:
    bool canConstruct(string &r, string &m) {
        if(r.size()>m.size()) return false;
        int umap[256] = {0};
        for(int i : m)
            umap[i]++;
                
        for(int i : r)
            if(umap[i]) 
                umap[i]--;    
            else
                return false;
        
        return true;
    }
};