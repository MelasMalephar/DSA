class Solution {
public:
    string smallestNumber(string p) {
        set<int> s={1,2,3,4,5,6,7,8,9};
        int n=p.size();
        vector<int> v(n);
        int t=0;
        for(int i=n-1;i>=0;i--){
            if(p[i]=='D')t++;
            else t=0;
            v[i]=t;
        }
        string ans;
        for(int i=0;i<n;i++){
            int a=*s.begin();
            if(p[i]=='I'){
                ans+=(a+'0');
                s.erase(a);
            }
            else{
                ans+=(a+v[i]+'0');
                s.erase(a+v[i]);
            }
        }
        ans+=(*(s.begin())+'0');
        return ans;
    }
};