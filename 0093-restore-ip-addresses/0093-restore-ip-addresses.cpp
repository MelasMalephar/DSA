class Solution {
public:
    vector<string> ans;
    
    void insert(stack<int> idx,string s){
        while(!idx.empty()){
            // cout<<idx.top()<<" ";
            s.insert(idx.top(),".");
            idx.pop();
        }
        // cout<<endl;
        ans.push_back(s);
    }
    
    void help(int i,stack<int> c,int n,int dot,string s){
        if(i>=n) return ;
        if(dot==0){
            string t=s.substr(i);
            // cout<<t<<endl;
            int k=t.size();
            if(k==0 || k>3) return;
            int nn=stoi(t);
            if(k==1) insert(c,s);
            else if(k==2 && nn>9) insert(c,s);
            else if(k==3 && nn>99 && nn<256) insert(c,s);
            else return ;
        }
        else{
            string temp="";
            for(int j=i;j<i+3;j++){
                // auto c=idx;
                temp+=s[j];
                int a=stoi(temp);
                if(j==i){c.push(j+1); help(j+1,c,n,dot-1,s); }
                else if(j==i+1 && a>9){c.push(j+1); help(j+1,c,n,dot-1,s); }
                else if(j==i+2 && a>99 && a<256){ c.push(j+1); help(j+1,c,n,dot-1,s); }
                else return;
                c.pop();
            }
        }
        
    }
    
    vector<string> restoreIpAddresses(string s) {
        int n=s.size();
        if(n>12) return ans;
        stack<int> v;
        help(0,v,n,3,s);
        return ans;
    }
};