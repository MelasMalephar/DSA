class Solution {
public:
    int maxPerformance(int n, vector<int>& s, vector<int>& e, int k) {
       vector<pair<int, int>> ess(n);
        for (int i = 0; i < n; ++i)
            ess[i] = {e[i], s[i]};
        sort(rbegin(ess), rend(ess));
        long sumS = 0, res = 0;
        priority_queue <int> pq; //min heap
        for(auto& [e, s]: ess){
            pq.emplace(-s);
            sumS += s;
            if (pq.size() > k) {
                sumS += pq.top();
                pq.pop();
            }
            res = max(res, sumS * e);
        }
        return res % (int)(1e9+7);
    }
};