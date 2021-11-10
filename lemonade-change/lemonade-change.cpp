class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int r5=0,r10=0;
        for(auto& d:bills)
        { if(d==5) r5++;
          else if(d==10){ r10++; r5--;}
          else 
          { if(r10>0){ r10--; r5--;}
            else r5-=3;
           }
         if(r5<0 || r10<0) return false;
        }
        return true;
    }
};