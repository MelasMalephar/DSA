class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& v) {
        vector<int> ans;
        int tempsum=0;
        for(auto c:nums){ if(c%2==0)tempsum+=c;}
        for(auto c:v){
            int k=c[0],l=c[1];
            if(nums[l]%2==0){
                if((nums[l]+k)%2==0){ 
                   nums[l]+=k;
                   tempsum+=k; 
                }
                else{
                    tempsum-=nums[l];
                    nums[l]+=k;
                }
            }
            else{
                if((nums[l]+k)%2==0){
                    nums[l]+=k;
                    tempsum+=nums[l];
                }
                else{
                    nums[l]+=k;
                }
            }
            ans.push_back(tempsum);
        }
        return ans;
    }
};