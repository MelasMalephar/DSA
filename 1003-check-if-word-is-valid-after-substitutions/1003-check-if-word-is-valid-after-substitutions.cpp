class Solution {
public:
    bool isValid(string s) {
        if(s.size()%3!=0) return false;
        while(s.size()!=0){
            auto it=s.find("abc");
            if(it==string::npos) return false;
            else s.erase(it,3);
        }
       return s.size()==0; 
    }
};