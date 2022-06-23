class Solution {
public:
    int scheduleCourse(vector<vector<int>>& v) {
        sort(begin(v),end(v),[](vector<int> &a,vector<int> & b){ return a[1]==b[1]?a[0]<b[0]:a[1]<b[1];});
        priority_queue<int> pq;
        int current=0;
        for(auto c:v){
            if(current+c[0]<=c[1]){
                current+=c[0];
                pq.push(c[0]);
            }
            else if(!pq.empty() && c[0]<pq.top()) {
                current-=pq.top();
                pq.pop();
                current+=c[0];
                pq.push(c[0]);
            }
        }
        return pq.size();
    }
};