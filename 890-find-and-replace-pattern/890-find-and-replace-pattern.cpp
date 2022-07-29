class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int i=1;
        int arr[26]={0};
        vector<int> v;
        for(auto c:pattern){
            if(arr[c-'a']==0){ arr[c-'a']=i++;}
            v.push_back(arr[c-'a']);
        }
        memset(arr,0,sizeof(arr));
        vector<string> ans;
        for(auto s:words){
            int k=1;
            vector<int> t;
            for(auto c:s){
                if(arr[c-'a']==0){ arr[c-'a']=k++;}
                t.push_back(arr[c-'a']);
            }
            memset(arr,0,sizeof(arr));
            if(t==v)ans.push_back(s);
        }
        return ans;
    }
};