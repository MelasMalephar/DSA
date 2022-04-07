class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        priority_queue<int> pq;
        int a,b;
        pq.push(0);
        for(auto &k:v){ pq.push(k);}
        while (pq.size()>1)
         { a = pq.top(); pq.pop();
           b = pq.top(); pq.pop();
           if(a-b > 0){ pq.push(a-b);}
          }
        return pq.top();
    }
};