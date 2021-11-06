class Solution {
public:
    int numJewelsInStones(string& j, string& s) {
        int sum=0;
        for(auto & c:j)
            for(auto& d:s)
                if(d==c) sum++;
        return sum;
    }
};