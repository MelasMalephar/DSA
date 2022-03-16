class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        s.push(-1);
        int i=0,cnt=0;
        for(auto && k:popped){
            while(s.top()!=k && i<pushed.size()){
                s.push(pushed[i++]);        
            }
            if(s.top()==k) {s.pop(); cnt++;}
        }
        return cnt==pushed.size();
    }
};