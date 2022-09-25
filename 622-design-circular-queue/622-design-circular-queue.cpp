class MyCircularQueue {
public:
    int start=0;
    int end=0;
    int n;
    vector<int> v;
    MyCircularQueue(int k) {
        n=k;
        v.resize(k,-1);
    }
    
    bool enQueue(int value) {
        if(v[end]!=-1 ) return false;
        v[end++]=value;
        if(end==n){ end=0;}
        return true;
    }
    
    bool deQueue() {
        if(v[start]==-1) return false;
        v[start++]=-1;
        if(start==n){ start=0;}
        return true;
    }
    
    int Front() {
        return v[start];
    }
    
    int Rear() {
        int t=end==0?n-1:end-1;
        return v[t];
    }
    
    bool isEmpty() {
        return v[start]==-1 && v[end]==-1;
    }
    
    bool isFull() {
        return end==start&&v[start]!=-1;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */