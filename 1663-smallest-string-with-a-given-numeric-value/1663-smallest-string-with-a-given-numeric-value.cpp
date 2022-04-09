class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans;
        int a=k/26;  
        while(a-- >0){ans.push_back('z'); n--;}
        k=k%26;
        if(n >0 && k>0){ans.insert(ans.begin(),'a'+k-1); n--;}
        return chk(n,ans);
    }
    string chk(int n,string ans){
        int i=0;
        while(n>0){
            for(;i<ans.size();i++){
                if(ans[i]>'a'){
                    ans[i]--;
                    ans.push_back('a');
                    n--; break;
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};