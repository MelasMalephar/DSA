class RecentCounter {
public:
    vector<int> m;
    
    int ping(int t) {
        m.push_back(t);
        auto i =lower_bound(m.begin(),m.end(),t-3000)-m.begin();
        return m.size()-i;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */