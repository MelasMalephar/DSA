class Solution {
public:
    int firstMissingPositive(vector<int>& n) {
        if(n.size() == 0)
            return 1;
        
        if(n.size() == 1)
        {
            if(n[0] == 1)
                return 2;
            else
                return 1;
        }
        
        unordered_set<int> s;
        int l=n.size();
        for(int k=0;k<l;k++)
        {   if(n[k]>0 ) s.emplace(n[k]);
        }
        for(int i=1;i<=l;i++)
            if(s.count(i)==0) return i;
        return l+1;
    }
};