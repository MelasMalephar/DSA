class Solution {
public:
    int brokenCalc(int s, int temp) {
        int bol=0;
        while(temp > s){ 
            bol++;
            if(temp%2==0)   temp/=2;
            else temp++;
        }
        return bol+(s-temp);
    }
};