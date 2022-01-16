class Solution {
public:
    int maxDistToClosest(vector<int>& s) {
        int res = 0, n = s.size(), last = -1;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 1) {
                res = last < 0 ? i : max(res, (i - last) / 2);
                last = i;
            }
        }
        res = max(res, n - last - 1);
        return res;
    }
};