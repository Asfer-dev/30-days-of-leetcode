class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> dup;
        for (int i = 0; i < nums.size(); i++) {
            if (dup.count(nums[i])) {
                return true;
            }
            dup[nums[i]] = i;
        }
        return false;
    }
};