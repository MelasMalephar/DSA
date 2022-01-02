class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {
        vector<int> res(v.size());
    for (int i = v.size() - 1; i >= 0; --i) {
        int j = i+1;
        while (j < v.size() && v[j] <= v[i]) {
            if (res[j] > 0) j = res[j] + j;
            else j = v.size();
        }
        if (j < v.size()) res[i] = j - i;
    }
    return res;
    }
};