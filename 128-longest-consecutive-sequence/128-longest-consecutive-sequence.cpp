class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        priority_queue<int> pq(nums.begin(),nums.end());
        int a=pq.top();
        pq.pop();
        int count =1,ans=0;
        while(!pq.empty()){
            int b=pq.top();
            if(b==a)pq.pop();
            else if(b+1==a){count++; a=b;}
            else {ans=max(ans,count); count=1; a=b;}
        }
        return max(ans,count);
    }
};