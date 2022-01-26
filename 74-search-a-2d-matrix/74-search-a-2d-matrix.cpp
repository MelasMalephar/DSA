class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        if (v.size() == 0 || v[0].size() == 0) return false;

        int h=v.size()-1,l=0;
        
        while(l<h){
            int mid=(h-l)/2+l;
            if(v[mid][v[mid].size()-1]<target){
                l=mid+1;
            }
            else if(v[mid][0]>target){
                h=mid-1;
            }
            else {l=mid; break;}
        }
        return  binary_search(v[l].begin(),v[l].end(),target);
    }
};