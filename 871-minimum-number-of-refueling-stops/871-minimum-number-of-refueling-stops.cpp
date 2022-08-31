class Solution {
public:
    int minRefuelStops(int target, int cur, vector<vector<int>>& s) {
         int i = 0, res;
        priority_queue<int>pq;
        for (res = 0; cur < target; res++) {
            while (i < s.size() && s[i][0] <= cur)
                pq.push(s[i++][1]);
            if (pq.empty()) return -1;
            cur += pq.top(), pq.pop();
        }
        return res;
    }
};

// 100
// 18
// [[9,18],[19,5],[20,10],[29,30],[30,20],[60,40]]
// 100
// 50
// [[9,18],[19,5],[20,10],[29,30],[30,20],[60,40]]