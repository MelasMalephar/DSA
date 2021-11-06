class Solution {
public:
    bool isOneBitCharacter(vector<int>& b) {
        int count_1 = 0;
        for (int i = (int) b.size() - 2; i >= 0 && b[i] == 1; i--) {count_1++;}
        return (count_1 % 2 == 0);
    }
};

// The numbers of 1 between the last 0 and the second last 0 determine the answer.
// If the number is odd, the answer is false.
// *** 0 10
// *** 0 11 10
// *** 0 11 11 10
// ....
// if the number is even, the answer is true.
// *** 0 0
// *** 0 11 0
// *** 0 11 11 0