class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n=v.size();
        int sum=0;
        for(auto &c:v)sum+=c;
        int sz=n-k,mn=0;
        int temp=0;
        for(int j=0;j<sz;j++){temp+=v[j];}
        for(int i=0;i<n-sz;i++){
            mn=max(mn,sum-temp);
            temp-=v[i];
            temp+=v[i+sz];
            // cout<<sum-temp<<" ";
        }
        mn=max(mn,sum-temp);
        // cout<<sum<<" "<<mn;
        return mn;
    }
};