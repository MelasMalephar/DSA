class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
        sort(v.begin(),v.end());
        vector<int> k;
        int j=v.size();
        int p=0;
       auto t = unique(v.begin(),v.end());  
          v.resize( std::distance(v.begin(),t) );
        for(int i=1;i<=j;i++)
        {if(i != v[p]) k.push_back(i);
         else p++;}
        return k;
    }
};