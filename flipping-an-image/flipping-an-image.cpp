class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> image) {
     
        for(auto& v:image)
        { for_each(v.begin(), v.end(), [](int &i){ i= i==0?1:0;});
         reverse( v.begin(), v.end());}
        return image;
    }
};