class Solution {
public:
    void makeCombiUtil(vector<vector<int> >& ans,
    vector<int>& tmp, int n, int left, int k)
{
    // Pushing this vector to a vector of vector
    if (k == 0 ) {
        if(accumulate(tmp.begin(),tmp.end(),0) == n) ans.push_back(tmp);
        return;
    }
 
    // i iterates from left to n. First time
    // left will be 1
    for (int i = left; i <= 9; ++i)
    {
        tmp.push_back(i);
        makeCombiUtil(ans, tmp, n, i + 1, k - 1);
 
        // Popping out last inserted element
        // from the vector
        tmp.pop_back();
    }
}
    
vector<vector<int> > makeCombi(int n, int k)
    {
    vector<vector<int> > ans;
    vector<int> tmp;
    makeCombiUtil(ans, tmp, n, 1, k);
    return ans;
     }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        if(k > n) return {};
        return makeCombi(n,k);
    }
};