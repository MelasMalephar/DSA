class Solution {
public:
    vector<int> findErrorNums(vector<int>& v) {
        vector<bool> pres(v.size()+1);
        int dup = 0;
        int sum = 0;
        for(int& n : v){
            if(pres[n]) dup = n;
            else pres[n] = true;\
                sum += n;
        }
        sum -= dup;
        int a = v.size();
        return {dup, (a * (a+1))/2 - sum};
    }
};