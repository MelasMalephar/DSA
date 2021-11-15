class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& v) {
        stack<int> s;
        unordered_map<int,int> mp;
        for(int i=0;i<v.size();i++)
        {
            if(!s.empty())
            {
                while(!s.empty() && v[i]>s.top())
                 {  mp.insert({s.top(),v[i]});
                    s.pop();}
            }
            s.push(v[i]);
        }
        while(!s.empty())
        {  mp.insert({s.top(),-1}); s.pop();}
        for(auto& d:nums1)
            d=mp[d];
        return nums1;
    }
};