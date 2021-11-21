class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
     int n = cost.size();
        int dp = 0, dp1 = 0, dp2 = 0; 
        for (int i = 2; i <= n; i++) {
            int jumpOneStep = dp1 + cost[i - 1]; 
            int jumpTwoStep = dp2 + cost[i - 2]; 
            dp = min(jumpOneStep, jumpTwoStep);
            dp2 = dp1;
            dp1 = dp;
        }
        return dp1;
    }
};