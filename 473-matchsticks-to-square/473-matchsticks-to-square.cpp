class Solution {
public:
 bool backtrack(vector<int>& v,vector<int> &visited, int target, int curr_sum, int i, int k) {
    if (k == 1) // if k == 1 then we found all subsets
        return true;

    if (curr_sum == target) // we found one subset, go on to the next one starting from curr_sum = 0
        return backtrack(v, visited, target, 0, 0, k-1);

    for (int j = i; j < v.size(); j++) {
        if (visited[j] || curr_sum + v[j] > target) continue; 
        visited[j] = true;
        if (backtrack(v, visited, target, curr_sum + v[j], j+1, k)) return true;
        visited[j] = false;
    }
        return false;
    }
    bool makesquare(vector<int>& v) {
        int ans=0;
        for(auto c:v){ ans+=c; }
        if(ans%4!=0 || ans==0) return false;
        vector<int>visited(v.size(), false);
        return backtrack(v, visited, ans / 4, 0, 0, 4);
    }
};