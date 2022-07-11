class Solution {
public:
    int totalSteps(vector<int>& A) {
        int n = A.size(), res = 0, j = -1;
        vector<int> stack(n), dp(n);
        for (int i = n - 1; i >= 0; --i) {
            while (j >= 0 && A[i] > A[stack[j]]) {
                dp[i] = max(++dp[i], dp[stack[j--]]);
                res = max(res, dp[i]);
            }
            stack[++j] = i;
        }
        return res;
    }
};