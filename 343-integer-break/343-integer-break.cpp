class Solution {
public:
    int integerBreak(int n) {
        // return INT_MAX;
        int arr[n+4];
        arr[2]=1;
        arr[3]=2;
        arr[4]=4;
        for(int i=5;i<n+1;i++){
            int a=i/2;
            int mxp=0;
            while(a > 1){
                mxp=max({mxp,a*(i-a),a*arr[i-a],arr[a]*arr[i-a]});
                a--;
            }
            arr[i]=mxp;
        }
        return arr[n];
    }
};