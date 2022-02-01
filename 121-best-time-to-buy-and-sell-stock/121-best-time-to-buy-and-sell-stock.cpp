class Solution {
public:
    int maxProfit(vector<int>& p) {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    int profit=0;
    int minvalue=10000;
        for(auto &i : p)
        {
            minvalue=min(minvalue,i);
            profit=max(profit,i-minvalue);
        }
        
        return profit;
    }
};