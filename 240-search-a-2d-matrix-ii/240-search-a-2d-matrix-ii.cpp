class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int row=v.size(),col=v[0].size();
         int s=0;
    int e=col-1;

    while (s<row && e>=0)
    {
       int element=v[s][e];

       if (t==element)
       {
           return 1;
       }
       if (t>element)
       {
           s++; //rowindex++
       }
       else
       {
           e--; // colindex--
       }
       
       
    }
    return 0;
    }
};