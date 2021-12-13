class Solution {
public:
    void sortColors(vector<int>& v) {
        int arr[3]={0,0,0};
        for(auto& i:v)
         { arr[i]++;}
        v.clear();
        for(int i=0;i<3;i++)
        { while(arr[i]-- > 0){ v.push_back(i);}
         }
    }
};