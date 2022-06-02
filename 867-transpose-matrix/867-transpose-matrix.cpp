class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {
        int l=m.size();
        int b=m[0].size();
        vector<vector<int>> k;
          int j=0;
          while(j<b){
            vector<int> v;
            for(int i=0;i<l;i++){v.push_back(m[i][j]);}
            k.push_back(v);
            j++;}
            return k;
        // return m;
    }
};