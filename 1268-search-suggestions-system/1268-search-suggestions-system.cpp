class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& v, string T) {
        sort(v.begin(),v.end());
        int n=T.size()+1;
        bool arr[n][v.size()+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<v.size();j++){
                if(i==0){
                    if(v[j][i]==T[i]) arr[i][j]=true;
                    else arr[i][j]=false;
                }
                else {
                    if(arr[i-1][j]==false) arr[i][j]=false;
                    else {  
                        // cout<<v[j].size()<<" "<<i<<endl;
                            if(v[j].size() >i && v[j][i]==T[i]) arr[i][j]=true;
                           else arr[i][j]=false;
                          }
                }
            }
        }
        vector<vector<string>> ans;
        for(int i=0;i<n-1;i++){
            vector<string> temp;
            for(int j=0;j<v.size();j++){
                // cout<<arr[i][j]<<" ";
                if(arr[i][j]) temp.push_back(v[j]);
                if(temp.size()==3){ ans.push_back(temp); j=v.size()+1;}
            }
            if(temp.size()<3)ans.push_back(temp);
            // cout<<endl;
        }
        return ans;
    }
};