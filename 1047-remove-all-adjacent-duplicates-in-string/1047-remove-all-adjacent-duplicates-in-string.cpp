class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        st.push('A');
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(!st.empty() && s[i]==st.top()){st.pop();}
            else st.push(s[i]);
        }
        string ans;
        while(st.top()!='A'){
            ans.insert(ans.begin(),st.top());
            st.pop();
        }
        return ans;
    }
};