class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int j=0;
        for(int k=0;k<n;k++){ num1.pop_back();}
        for(int i=0;i<m+n;i++){
            if(j<n && num1[i]>num2[j]){ num1.insert(num1.begin()+i,num2[j++]); }
        }
        for(;j<n;j++){num1.push_back(num2[j]);}
    }
};