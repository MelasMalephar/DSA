class Solution {
public:
    int numRescueBoats(vector<int>& v, int l) {
        sort(v.begin(),v.end());
        
        int i = 0, j = v.size() - 1,cnt = 0;
        
        while(i <= j)
        {   
            // lightest person + heaviest person sum <= limit
            // they can go together
            if(v[i] + v[j] <= l)
            {
                ++i;
                --j;
            }
            // if sum is over the limit,
            // heaviest will go alone.
            else
                --j;
            
            ++cnt;  // number of boats
        }
        
        return cnt;
    }
};