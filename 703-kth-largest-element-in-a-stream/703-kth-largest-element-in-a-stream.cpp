class KthLargest {
public:
    multiset<int> ms;
    int a;
    KthLargest(int k, vector<int>& nums) {
        a=k;
        for(auto& c:nums){
            ms.insert(c);
        }
    }
    
    int add(int val) {
        ms.insert(val);
        auto it=ms.end();
        std::advance(it,-a);
        return *it;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */