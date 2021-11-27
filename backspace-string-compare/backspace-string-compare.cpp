class Solution {
public:
    void rems(string& s){
        int n=s.size();
        int d=s.find("#");
        while(d!=-1)
        {  // cout<<d<<" "<<s<<endl;
            if(d==0) s.erase(s.begin());
            else s.erase(s.begin()+d-1,s.begin()+d+1);
            d=s.find("#");
        }
    }
    bool backspaceCompare(string k, string t) {
        rems(k);
        rems(t);
        return k==t;
    }
};