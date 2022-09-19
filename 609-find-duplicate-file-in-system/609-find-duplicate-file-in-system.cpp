class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(auto s:paths){
           stringstream ss (s);
           string word,root;
           int flag=0; 
           while(ss>>word){
               if(flag==0){root=word; flag++;}
               else {
                   auto t=word;
                   auto it=t.find('(');
                   string temp1=t.substr(it);
                   string val=t.substr(0,it);
                   mp[temp1].push_back(root+"/"+val);
               }
           } 
        }
        for(auto [k,l]:mp){ if(l.size()>1)ans.push_back(l); } 
        return ans;
    }
};