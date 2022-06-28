class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n=v.size();
        int mn=v[0],mx=v[n-1],lmx=0,lmn=0;
        if(n<2) return 0;
        int vt[n-1],bt[n-1];
        for(int i=1;i<n;i++){
            if(mn>v[i]){ mn=v[i];}
            lmx=max(lmx,v[i]-mn);
            vt[i-1]=lmx;
        }
        if(n<4){
            int sans=0;
            for(auto c:vt)sans=max(sans,c);
            return sans;
        }
        for(int i=n-2;i>=0;i--){
            mx=max(mx,v[i]);
            lmn=max(lmn,mx-v[i]);
            bt[i]=lmn;
        }
        int ans=0;
        for(int i=0;i<n-2;i++){
            ans=max(ans,vt[i]+bt[i+1]);
        }
        return ans;
    }
};