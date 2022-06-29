class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& v) {
        sort(begin(v),end(v),[](auto &a,auto &b){ return a[1]==b[1]?a[0]<b[0]:a[1]<b[1];});
        vector<vector<int>> ans;
        for(auto c:v){
            if(c[1]==0)ans.push_back({c[0],c[1]});
            else{
            int b=c[1];
            int i=0;
            while(i!=ans.size()){
                if(ans[i][0]>=c[0])b--;
                if(b<0)break;
                // cout<<b<<" "<<ans[i][0]<<endl;
                i++;
            }
            // cout<<endl;
            ans.insert(ans.begin()+i,{c[0],c[1]});
            }
        }
        // cout<<endl;
        return ans;
        
    }
};