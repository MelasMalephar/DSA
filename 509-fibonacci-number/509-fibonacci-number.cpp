class Solution {
public:
    int fib(int n) {
       int a[n+4];
       a[0]=0; 
       a[1]=1; a[2]=1;
       for(int i=3;i<n+1;i++){
           a[i]=a[i-1]+a[i-2];
       } 
    return a[n];
    }
};