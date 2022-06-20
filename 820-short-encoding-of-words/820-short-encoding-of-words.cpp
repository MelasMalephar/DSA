class Solution {
public:
    void it(unordered_set<string> &st,string t){
        while(t.size()>0){
            st.insert(t);
            // cout<<t<<" ";
            t.erase(0,1);
        }
    }
    int minimumLengthEncoding(vector<string>& v) {
        sort(v.begin(),v.end(),[](string &a,string &b){return a.size()>b.size();});
        unordered_set<string> st;
        int ans=0;
        for(int i=0;i<v.size();i++){
            // cout<<i<<" "<<v[i]<<endl;
            if(st.find(v[i])!=st.end()){ continue;}
            else {  it(st,v[i]); ans+=v[i].size()+1;}
        }
        // for(auto c:st)cout<<c<<" ";
        // cout<<endl;
        return ans;
    }
};