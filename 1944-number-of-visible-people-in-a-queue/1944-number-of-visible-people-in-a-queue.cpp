class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& a) {
        int n=a.size();
        stack<int>st;
        vector<int>ans(n);
         for(int i=n-1;i>=0;i--)
         {
             int k=0;
             while(st.size()>0&&st.top()<a[i])
             {
                 st.pop();
                 k++;
             }
             if(st.size()==0)
                 ans[i]=k;
             else
             {
                 ans[i]=k+1;
             }
             st.push(a[i]);
         }
           return ans;
        }
};