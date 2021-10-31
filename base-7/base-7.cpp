#define max 5764801
class Solution {
public:
    string convertToBase7(int num) {
      if(num==0)return "0";
      int flag=0;
      if(num<0) {flag++; num=abs(num);}
      if(num<7) 
      {string c; 
       if(flag!=0)
        c.push_back('-');    
       c.push_back(num+48); 
       return c;}  
      int t=max,a=0;
      while(a==0) 
       { a = num/t;
         t/=7;}
      t*=7;  
      string k;
      if(flag != 0 )k.push_back('-');
      while(t>0)
       { int d=num/t; num%=t; t/=7;  k.push_back(d+48); }  
      return k;  
    }
};