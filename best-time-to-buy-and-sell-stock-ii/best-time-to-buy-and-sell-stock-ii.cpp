class Solution {
public:
    int maxProfit(vector<int>& v) {
        int sum =0;
        for(int i=1;i<v.size();i++)
           if(v[i]-v[i-1] > 0) sum+=(v[i]-v[i-1]);
        return sum;
    }
};