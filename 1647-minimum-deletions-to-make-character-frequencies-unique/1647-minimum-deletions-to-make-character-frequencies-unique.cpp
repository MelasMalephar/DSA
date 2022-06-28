class Solution {
public:
    int minDeletions(string s) {
        int arr[26];
        memset(arr,0,sizeof(arr));
        for(auto &c:s)arr[c-'a']++;
        map<int,int> mp;
        for(auto &c:arr){ if(c>0) mp[c]++;}
        int ans=0;
        for (auto rit=mp.rbegin(); rit!=mp.rend(); ++rit){
            // cout<<rit->first<<" "<<rit->second<<"  ->"<<ans<<endl;
            if(rit->first==0){ break;}
            if(rit->second>1){ int a=(rit->second)-1; mp[(rit->first)-1]+=a; ans+=a;}
        }
        return ans;
    }
};