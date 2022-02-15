class Solution {
public:
    void duplicateZeros(vector<int>& v) {
        int n=v.size();
        for(int i=0;i<n;i++){
            if(v[i]==0){v.insert(v.begin()+i,0); i++;}
        }
        v.resize(n);
    }
};