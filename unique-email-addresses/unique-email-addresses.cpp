class Solution {
public:
    int numUniqueEmails(vector<string>& v) {
    string k;
    unordered_set<string> s;
    int i;
        for(auto d:v)
        { auto it=d.find('@');
          for(i=0;i<it;i++)
              {   if(d[i]=='+') i=it;
                  if(d[i]!='.')k.push_back((d[i]));
              }
          k.insert( k.end(), d.begin()+i, d.end() );
          s.insert(k);
          k="";
        }
    return s.size();
    }
};