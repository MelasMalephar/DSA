class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>> intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        stack<vector<int>> s;
        s.push(intervals[0]);
    for(int i = 1; i < intervals.size(); i++) {
        vector<int> a = s.top();
        if(a[1] >= intervals[i][0]) {
            s.pop();
            a[1] = max(a[1], intervals[i][1]);
            s.push(a);
        }else {
            s.push(intervals[i]);
        } 
    }
    
    while(!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
};