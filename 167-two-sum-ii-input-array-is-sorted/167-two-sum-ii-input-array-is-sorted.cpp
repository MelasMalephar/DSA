class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
         int start=0,end=v.size()-1;
        while(start<end){
            if(v[start]+v[end]==t)
                break;
            if(v[start]+v[end]<t)
                start++;
            else
                end--;}
    return {start+1,end+1};}
};