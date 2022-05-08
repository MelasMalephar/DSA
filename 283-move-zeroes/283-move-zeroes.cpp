class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ct=0;
        for(auto &c:nums){
            if(c==0){
                ct++;
            }
        }
        if(ct == nums.size()) return ;
        nums.erase( remove( nums.begin(), nums.end(), 0 ), nums.end() );
        for(int i=1;i<=ct;i++){
            nums.push_back(0);
        }
    }
};