class Solution {
public:
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
        int m=v1.size(),n=v2.size();
        if(m>n){ return findMedianSortedArrays(v2,v1); }
        int l=0,r=m;
        while(l<=r){
            int PX=(l+r)/2;
            int PY=(n+m+1)/2-PX;
            int maxlx=(PX==0)?INT_MIN:v1[PX-1];
            int minrx=(PX==m)?INT_MAX:v1[PX];
            int maxly=(PY==0)?INT_MIN:v2[PY-1];
            int minry=(PY==n)?INT_MAX:v2[PY];
            if(maxlx<=minry&&maxly<=minrx){
                if((m+n)%2==0)
                    return (double)(max(maxlx,maxly)+min(minrx,minry))/2;
                else
                    return (double)(max(maxlx,maxly));
            }else if(maxlx>minry)
                r=PX-1;
            else
                l=PX+1;
        }
        return -1.0;
    }
    
};