class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> a;
        int mask = 1;
        while(n)
        {   if((mask&n) >= 1)
              { if(a.size()>0 && a[a.size()-1] == 1) return false;
                a.push_back(1);}
            else
              { if(a.size()>0 && a[a.size()-1] == 0) return false;
                a.push_back(0);}
            n>>=1;
        }
    return true;
    }
};