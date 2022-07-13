class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0,res=0;
        int arr[k];
        memset(arr,0,sizeof(arr));
        arr[0]=1;
        for(auto &a:nums){
            sum = (sum+a % k + k) % k ;
            res += arr[sum]++;
        }
        return res;
    }
};