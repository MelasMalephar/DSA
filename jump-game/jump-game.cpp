class Solution {
public:
    bool canJump(vector<int>& v) {
        if(v.size()==1) return true;
        int ans=0, n=v.size()-1, i=0;
        while(i<=n){
            if(v[i]+i >= n){ return true;}
            int mx=0;
            auto k=v.begin()+i,temp=k+1;
            for(auto j=k+1;j<=k+v[i];j++) if(mx < (j-k)+*j){ mx=*j+(j-k); temp=j;}
            if(mx==0) return false;
            i = temp-v.begin();
    
        }
        return false;
    }
};