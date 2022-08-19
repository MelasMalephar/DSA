class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> mp, tails;
        for(int &i : nums) mp[i]++;
        for(int &i : nums){
            if(!mp[i]) continue;
            mp[i]--;
            if(tails[i-1] > 0){
                tails[i-1]--;
                tails[i]++;
            }
            else if(mp[i+1] && mp[i+2]){
                mp[i+1]--;
                mp[i+2]--;
                tails[i+2]++;
            }
            else return false;
        }
        return true;
    }
};