#define mod 1000000007
class Solution {
public:
    unordered_map<char,int> m={ {'a',0} , {'e',1} ,{'i',2} , {'o',3} , {'u',4}};
    unordered_map<char,vector<char>> mp={ {'a',{'e'}},{'e',{'a','i'}} ,{'i',{'a','e','o','u'}},{'o',{'i','u'}},{'u',{'a'}} };
 
    int dp(char prev,int n,vector<vector<int>> &arr){
        if(arr[m[prev]][n]!=-1) return arr[m[prev]][n];
        if(n==0) return 1;
        int ans=0;
        for(auto c:mp[prev]){
            ans=(ans+dp(c,n-1,arr)) % mod;
        }
        return arr[m[prev]][n]=ans%mod;
    }
    int countVowelPermutation(int n) {
        vector<vector<int>> arr(5,vector<int> (n+5,-1));
        int ans=0;
        for(auto [k,l]:mp){ans=(ans+dp(k,n-1,arr)) % mod; }
        return ans% mod;
    }
};