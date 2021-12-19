class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        multiset<int> s(v.begin(),v.end());
        return *prev(s.end(),k);
    }
};