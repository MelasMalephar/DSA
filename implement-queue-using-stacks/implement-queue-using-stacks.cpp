class MyQueue {
public:
    stack<int> t;
    
    void push(int x) {
	t.push(x);
    }
    
    int pop() {
        stack<int> temp;
        while(!t.empty())
        { temp.push(t.top());
          t.pop();
        }
        int d=temp.top();
        temp.pop();
        while(!temp.empty())
        { 
            t.push(temp.top());
            temp.pop();
        }
        return d;
    }
    
    int peek() {
        stack<int> temp;
        stack<int> s=t;
        while(!s.empty())
        { temp.push(s.top());
          s.pop();
        }
        int d=temp.top();
        return d;
    }
    
    bool empty() {
        return t.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */