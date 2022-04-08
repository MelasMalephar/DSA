class Solution {
public:
    string solveEquation(string s) {
        int i=0;
        int para=0, xpara=0;
        int flag = 1;
        while(i<s.size())
        {
            int sign = 1;
            int temp = 0;
            if(s[i] == '=') 
            {
                flag = -1;
                i++;
            }
            if(s[i] == '-') 
            {
                sign = -1; 
                i++;
            }
            if(s[i] == '+') 
            {
                sign = 1;
                i++;
            }
            
            if(isdigit(s[i]))
            {
                while(i<s.size() && isdigit(s[i]))
                {
                    temp = temp*10 + s[i]-'0';
                    i++;
                }
                if(i< s.size() && s[i] == 'x')
                {
                    xpara += flag*sign*temp;
                    i++;
                } 
                else 
                    para += flag*sign*temp;
            } 
            else //x
            {
                xpara += flag*sign;
                i++;
            }
            
        }
        string res;
        //cout<<para<<", "<<xpara<<endl;
        if(para == 0 && xpara == 0) 
            res = "Infinite solutions";
        else if(xpara == 0) 
            res = "No solution";
        else
            res = "x="+to_string(para/xpara*-1);
        return res;
    }
};