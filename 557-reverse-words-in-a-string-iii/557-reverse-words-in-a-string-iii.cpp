class Solution {
public:
    string reverseWords(string& s) {
      string k,w;
      stringstream ss(s);
      while(ss >> w)
      {
       reverse(w.begin(),w.end());
       k.insert(k.end(),w.begin(),w.end());
       k.push_back(' ');   
      }
     k.pop_back();
     return k;
    }
};