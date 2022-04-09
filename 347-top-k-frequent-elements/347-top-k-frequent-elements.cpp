class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto &i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto [k,l]: mp) pq.push({l,k});
        while(!pq.empty() && k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};