class Solution {
public:
    int findMaximumXOR(vector<int>& n) {
    int maxx = 0, mask = 0;
 
    set<int> se;
 
    for (int i = 30; i >= 0; i--) {
        mask |= (1 << i);
 
        for (int i = 0; i < n.size(); ++i) {
            se.insert(n[i] & mask);
        }
 
        int newMaxx = maxx | (1 << i);
 
        for (int p : se) {
            if (se.count(newMaxx ^ p)) {
                maxx = newMaxx;
                break;
            }
        }
        se.clear();
    }
 
    return maxx;
    }
};