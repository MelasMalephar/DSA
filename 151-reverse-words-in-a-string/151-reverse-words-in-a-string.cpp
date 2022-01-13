class Solution {
public:
    string reverseWords(string s) {
        stringstream ww(s);
        string t;
        stack<string> st;
        while(ww>>t){
            st.push(t);
        }
        t.clear();
        while(!st.empty()){
            t+=st.top();
            t+=" ";
            st.pop();
        }
        t.resize(t.size() - 1);
        return t;
    }
};