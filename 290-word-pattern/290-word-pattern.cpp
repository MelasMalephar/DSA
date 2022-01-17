class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<int> pat_map (26, 0);
        unordered_map<string,int> str_map;
        int i=0, n = p.size();
        istringstream ss (s);
        string token;
        
        for(string token; ss >> token; ++i) {
            if(i == n || pat_map[p[i]-'a'] != str_map[token]) return false;
            
            // 1-based indexing since map assigns 0 as a default value for keys not found.
            pat_map[p[i]-'a'] = str_map[token] = i+1;
        }
        
        return i == n;
    }
};