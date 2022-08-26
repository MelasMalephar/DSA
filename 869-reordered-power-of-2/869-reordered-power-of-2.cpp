class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        string t;
        for(int i=1;t.size()<=s.size();i=i<<1){
            t=to_string(i);
            sort(t.begin(),t.end());
            if(t==s) return true;
        }
        return false;
    }
};