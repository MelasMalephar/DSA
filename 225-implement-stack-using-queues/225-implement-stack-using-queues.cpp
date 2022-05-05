class MyStack {
    queue<int> q;
public:
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int> temp;
        while(q.front() != q.back())
        { 
            temp.push(q.front());	
            q.pop();
        }
        auto k =q.front();
        q.pop();
        while(!temp.empty())
        { 
            q.push(temp.front());
            temp.pop();
        }
        return k;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */