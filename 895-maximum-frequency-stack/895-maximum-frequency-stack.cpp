using Freq = int;
using Timestamp = int;
class FreqStack {
public:
    // max pq
    priority_queue<tuple<Freq, Timestamp, int>> pq;
    unordered_map<int, Freq> map;
    int timestamp;
    FreqStack() {
        timestamp = 0;
    }
    
    void push(int val) {
        int f = ++map[val];
        pq.push({f, timestamp++, val});
    }
    
    int pop() {
        int f, tidx, val;
        tie(f, tidx, val) = pq.top();
        pq.pop();
        map[val]--;
        return val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */