class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0,i=0,j=h.size()-1;
        while(i<j)
        {   int l=min(h[i],h[j]);
            ans=max(ans,l * (j-i) );
            while (h[i] <= l && i < j) i++;
            while (h[j] <= l && i < j) j--;
        }
        return ans;
    }
};