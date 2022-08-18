class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto&c:arr){
            mp[c]++;
        }
        vector<int> s;
        long sum=0;
        for(auto &[k,l]:mp){
            s.push_back(l);
            sum+=l;
        }
        sort(s.begin(),s.end());
        int i=s.size()-1;
        int step=0,chk=0;
         while (chk*2 < sum) {
            step += 1;
            chk += s[i--];
        }
        return step;
       
    }
};