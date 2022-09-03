class Solution {
public:
    vector<int> ans;
    
    void mkvtr(string s,int n,int k,int prev){
        if(n<=0){
            ans.push_back(stoi(s)); return;
        }
        int a=prev-k,b=prev+k;
        if(a==b && a>=0 && a<=9) mkvtr(s+to_string(a),n-1,k,a);
        else {
        if(a>=0){ mkvtr(s+to_string(a),n-1,k,a);}
        if(b<=9){ mkvtr(s+to_string(b),n-1,k,b);}
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<10;i++){
            mkvtr(to_string(i),n-1,k,i);
        }
        return ans;
    }
};