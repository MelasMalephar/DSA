class Solution {
public:
    bool canPartition(vector<int>& v) {
     bitset<10001> b(1);
     int sum=0;
     for(auto& n:v){
         sum+=n;
         b |= b<<n;
     }
    return !(sum & 1) && b[sum >> 1];
    }
};