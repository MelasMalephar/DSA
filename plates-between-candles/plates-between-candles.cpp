class Solution {
public:
   int platesPrefixSum[100001];
   
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int> ans, candles;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '|') {
                candles.push_back(i);
                platesPrefixSum[i] = i == 0 ? 0: platesPrefixSum[i-1];
            }
            
            else
                platesPrefixSum[i] = i == 0 ? 1: platesPrefixSum[i-1] + 1;
        }
        
        for (int i = 0; i < queries.size(); i++) {
            int x = queries[i][0], y = queries[i][1];
            
            int x1 = lower_bound(candles.begin(), candles.end(), x) - candles.begin();
            int y1 = upper_bound(candles.begin(), candles.end(), y) - candles.begin() - 1;

            int res = 0;
            if (candles[x1] <= candles[y1])
                res = platesPrefixSum[candles[y1]] - (candles[x1] == 0 ? 0 :  platesPrefixSum[candles[x1]-1]);
    
            ans.push_back(res);
        }
        
        return ans;
    }
};