class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int mw) {
        vector<string> ans;
        vector<string> temp;
        int t=0;
        for(auto s:words){
            if(t+s.size()+temp.size()<=mw){
                t+=s.size();
                temp.push_back(s);
            }
            else {
                int space=mw-t;
                int n=temp.size()-1;
                string input;
                if(n==0){ input+=temp[0]; while(space-- > 0){ input+=" ";}}
                else{
                    vector<int>arr(n+1,0);
                    int y=0;
                    while(space-->0){
                        arr[y]++;
                        y++;
                        y%=n;
                    }
                    for(int i=0;i<temp.size();i++){
                        input+=temp[i];
                        for(int j=0;j<arr[i];j++) input+=" ";
                    }
                    
                }
                ans.push_back(input);
                temp.clear();
                t=s.size();
                temp.push_back(s);
            }
        }
        string fnl;
        for(auto o:temp){
            fnl+=o;
            fnl+=" ";
        }
        fnl.pop_back();
        while(fnl.size()!=mw){
            fnl+=" ";
        }
        ans.push_back(fnl);
        return ans;
    }
};