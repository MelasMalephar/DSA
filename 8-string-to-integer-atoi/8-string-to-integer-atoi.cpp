class Solution {
public:
    int myAtoi(string s) {
    int n=s.length();
long int ans=0;
int x = 0;
bool negnumber=false;
int symboloccur=0;
bool flag=0;
for(int i=0;i<n;i++)
{
if(symboloccur>1)
{
break;
}
if(s[i]>='0' && s[i]<='9')
{
x=s[i]-'0';
ans=(ans*10)+x;
flag=1;
}
else if(s[i]=='-')
{
symboloccur++;
if(flag==1)
break;
negnumber=true;
}
else if(s[i]=='+')
{
symboloccur++;
if(flag==1)
break;
negnumber=false;
}
else if(s[i]==' ')
{
if(symboloccur>0)
break;
if(flag==1)
break;
continue;
}
else
{
break;
}
if(!negnumber && ans>2147483647)
return 2147483647;
else if(negnumber && ans>2147483648)
return -2147483648;
}
if(negnumber)
{
return -ans;
}
else
{
return ans;
}
    }
};