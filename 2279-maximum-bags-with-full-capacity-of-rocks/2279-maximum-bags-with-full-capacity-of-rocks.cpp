class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int ar) {
        int ans=0;
        long long int extra=0;
        vector<int> v;
        for(int i=0;i<c.size();i++){
            int a=c[i]-r[i];
            if(a==0) ans++;
            else{
                extra+=a;
                v.push_back(a);
            }
        }
        if(extra <= ar ){ return c.size();}
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            ar-=v[i];
            if(ar<0){ break;}
            else { ans++;}
        }
        return ans;
    }
};