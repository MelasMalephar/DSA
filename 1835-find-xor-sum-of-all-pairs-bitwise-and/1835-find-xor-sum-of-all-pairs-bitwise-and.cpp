class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int c=0,d=0;
        for(auto i:arr1) c^=i;
        for(auto j:arr2) d^=j;
        return c&d;
    }
};