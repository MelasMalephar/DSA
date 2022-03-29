class Solution {
public:
    int findDuplicate(vector<int>& v) {
        vector<bool> pres(v.size());
        for(int &n : v){
            if(pres[n]) {return n;}
            else pres[n] = true;
        }
        return 0;
    }
};