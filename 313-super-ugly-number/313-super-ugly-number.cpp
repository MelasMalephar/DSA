class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        if(n==1) return 1;
        vector<int> ptr(primes.size(),0);
        vector<int> elmt(n,0);
        elmt[0]=1;
        int t;        
        for(int i=1; i<n ; i++){
            int mini=INT_MAX;
            int idx=0;
            for(int j=0; j<primes.size(); j++){
                t=primes[j]*elmt[ptr[j]];
                if(t<mini){
                    mini=t;
                    idx=j;
                }
            }
            for(int j=0; j<primes.size(); j++){
                if(mini==primes[j]*elmt[ptr[j]]){
                    ptr[j]++;
                }
            }
            elmt[i]=mini;
        }
        return elmt[n-1]; 
    }
};