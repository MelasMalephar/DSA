class Solution {
public:
    bool judgeCircle(string m) {
        int a=0,b=0,s=0;
        for(auto&c:m)
        {   if(c=='U') s++;
            if(c=='D') s--;
            if(c=='R') a++;
            if(c=='L') b++;
        }
        a=abs(a-b);
        if(a==0 && s==0) return true;
        return false;
    }
};