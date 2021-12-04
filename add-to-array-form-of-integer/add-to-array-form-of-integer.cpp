class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size(), start = n-1, carry = 0;;
        vector<int> res;
        while(start>=0 || carry || k){
            if(start>=0) carry += num[start], start--;
            if(k) carry += k % 10, k = k / 10;
            res.push_back( carry % 10);
            carry = carry / 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};