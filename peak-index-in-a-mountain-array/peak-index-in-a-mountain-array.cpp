class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        stack<int> s;
        s.push(-1);
        for(int i=0;i<arr.size();i++){
            if(s.top()<arr[i])
            {s.push(arr[i]);}
            else return i-1;
        }
        return 0;
    }
};