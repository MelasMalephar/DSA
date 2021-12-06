class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
          int oddPos = 0, evenPos = 0;
        for(auto& p : position)
            p & 1 ? oddPos++ : evenPos++;
        return min(oddPos, evenPos);
    }
};