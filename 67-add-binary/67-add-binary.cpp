class Solution {
public:
    string addBinary(string a, string b) {
      ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int i = a.size() - 1,j = b.size() - 1,c = 0;
        string r = "";
        
        while (i >= 0 || j >= 0 || c) {
            if (i >= 0 && a[i--] == '1') ++c;
            if (j >= 0 && b[j--] == '1') ++c;
            r.insert(0, 1, c % 2 == 1 ? '1' : '0');
            c /= 2;
        }
        
        return r;
    }
};