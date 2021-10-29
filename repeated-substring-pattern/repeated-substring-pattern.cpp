class Solution {
public:
    bool repeatedSubstringPattern(string &s) {
        if(s.length()==1) return false;
       return (s + s).substr(1, 2*s.size()-2).find(s) != -1;}
};

// eg-1 s = "abab"
// s+s = "abababab"

// On removing the first and the last characters, we get:
// (s+s).substr(1, 2*s.size()-2) = "bababa"

// This new string, "bababa" still contains the original string, "abab".
// Thus there exists some repeated pattern in the original string itself.


// eg-2 s = "aba"
// s+s = "abaaba"

// On removing the first and the last characters, we get:
// (s+s).substr(1, 2*s.size()-2) = "baab"

// This new string, "baab" does not contain the original string, "aba".
// This implies that there does not exist any pattern in the original string itself.