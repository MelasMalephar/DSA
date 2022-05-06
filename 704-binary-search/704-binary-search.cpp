class Solution {
public:
    int search(vector<int>& nums, int t) {
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=(h-l)/2 +l;
            // cout<<mid<<" : "<<l<<" - "<<h<<endl;
            if(nums[mid] == t){ return mid;}
            else if(nums[mid] < t){ l=mid+1;}
            else h=mid-1;
        }
        
        return -1;
    }
};