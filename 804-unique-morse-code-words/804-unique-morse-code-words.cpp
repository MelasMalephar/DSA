class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
                          ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",
                          ".--","-..-","-.--","--.."};
        set<string> s;
        for(auto st:words){
            string ans;
            for(auto c:st){
                ans+=v[c-'a'];
            }
            s.insert(ans);
        }
        return s.size();
    }
};