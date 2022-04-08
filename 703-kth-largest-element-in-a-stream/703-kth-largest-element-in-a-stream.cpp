class KthLargest {
    priority_queue<int, std::vector<int>, std::greater<int>> q;
    int ksize;
public:
    KthLargest(int k, vector<int>& nums) {
        ksize = k;
        for(auto &x: nums) {
            if(q.size() < ksize) q.push(x);
            else if(x > q.top()){
                q.pop();
                q.push(x);
            } 
        }
        
    }
    
    int add(int val) {
        
        if(q.size() < ksize) q.push(val);
        else if(val > q.top()) { q.pop(); q.push(val);}
        auto v = q.top();
        return v;
    }
};
