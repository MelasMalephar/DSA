class Solution {
public:
    int jump(vector<int>& v) {
        if(v.size()==1) return 0;
        int ans=0,n=v.size()-1,i=0;
        while(i<=n){
            if(v[i]+i >= n){ ans++; return ans;}
            int mx=0;
            auto k=v.begin()+i,temp=k+1;
            for(auto j=k+1;j<=k+v[i];j++){
                // cout<<"("<<j-k + *j<<")"<<endl;
                if(mx < (j-k)+*j)
                { mx=*j+(j-k); temp=j;}
            }
             // cout<<i<<" "<<temp-v.begin()<<" "<<mx<<endl;
             i = temp-v.begin();
            ans++;
        }
        return ans;
    }
};