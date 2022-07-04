class Solution {
public:
    int jobScheduling(vector<int>& s, vector<int>& e, vector<int>& p) {
         int n = p.size(), ans = 0;
        vector<vector<int>> tmp;
        for(int i = 0; i < n; i++)
            tmp.push_back({s[i], e[i], p[i]});

        sort(tmp.begin(), tmp.end(),[](auto &a,auto &b){ return a[0]<b[0];});

        map<int, int> mp;
        for(int i = n - 1; i >= 0; i--)
        {
            int tmp2 = tmp[i][2];
            auto it = mp.lower_bound(tmp[i][1]);

            if(it != mp.end())
                tmp2 += it->second;

            ans = max(ans, tmp2);
            mp[tmp[i][0]] = ans;
        }

        return ans;
    }
};