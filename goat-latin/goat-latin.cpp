class Solution {
public:
    string toGoatLatin(string& s) {
     istringstream w(s);
     int i,j=1;
     string k,t,v={'a', 'e', 'i', 'o','u','A','E', 'I', 'O','U'};
     while(w>>t)
     { j++;
       if(find(v.begin(),v.end(),t[0]) == v.end() )
         { t+=t[0]; t.erase(t.begin());} 
        k += t+"ma";
        for(i=1;i<j;i++)
            k+="a";
       k+=" ";
      }
    k.pop_back();
    return k;
    }
};