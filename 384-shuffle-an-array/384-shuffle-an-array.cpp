class Solution {
    vector<int> orgNums;
    vector<int> nums;

public:

    Solution(vector<int>& nums) {
        srand(time(NULL));
        this->nums = orgNums = nums;
    }

    vector<int> reset() { // T: O(1)
        return orgNums;
    }

    vector<int> shuffle() { // T: O(n)
        for (int i = 0; i < nums.size(); i++)
        {
            int randomIndex = rand() % nums.size();
            swap(nums[i],nums[randomIndex]);
        }
        return nums;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */