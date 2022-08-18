class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        auto v=nums;
        sort(v.begin(),v.end());
        int t=1,q=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(t<nums.size()){ nums[t]=v[i]; t+=2;}
            else { nums[q]=v[i]; q+=2;}
        }
    }
};