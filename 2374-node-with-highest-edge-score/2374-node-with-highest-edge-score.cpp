class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n=edges.size();
        vector<int> arr[n+1];
        for(int i=0;i<n;i++){
            arr[edges[i]].push_back(i);
        }
        long long sum=0;
        int t=0,fnl=-1;
        for(auto c:arr){
            long long ans=0;
            for(auto i:c)ans+=i;
            // cout<<ans<<endl;
            if(sum<ans){
                sum=ans;
                fnl=t;
            }
            t++;
        }
        return fnl;
    }
};