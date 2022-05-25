class Solution {
public:
    int threeSumClosest(vector<int>& num, int t) {
       sort(num.begin(),num.end());
       int n=num.size(); 
       int ans=0,mn=10000; 
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               for(int k=j+1;k<n;k++){
                   if(mn > abs(num[i]+num[j]+num[k]-t))
                   {  ans=num[i]+num[j]+num[k];
                      mn=abs(num[i]+num[j]+num[k]-t);}
               }
           }
       }
     return ans;
    }
};