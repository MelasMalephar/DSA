class Solution {
public:
    int numberOfSteps(int n) {
        int ans=0;
        while(n!=0){
        ans++;    
        if(n%2==0){ n=n>>1;}
        else n--;    
        }
        return ans;
    }
};