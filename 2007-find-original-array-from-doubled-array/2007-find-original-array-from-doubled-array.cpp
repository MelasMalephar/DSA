class Solution {
public:
    vector<int> findOriginalArray(vector<int>& v) {
        vector<int> ans;
        if(v.size()%2 != 0) return ans;
        map<int, int> mp;
        for(auto &num : v){
            mp[num]++;
        }
        for(auto &[k,l]:mp){
            if(l==0) continue;
            if(k==0){
                if(l%2!=0) return ans;
                for(int i=0;i<l/2;i++) ans.push_back(0);
            }
            else{
                if(mp[2*k]>=l){
                    mp[2*k]-=l;
                    for(int i=0;i<l;i++){ ans.push_back(k);}
                }
                else return {};
            }
        }
        return ans;
        
    }
};