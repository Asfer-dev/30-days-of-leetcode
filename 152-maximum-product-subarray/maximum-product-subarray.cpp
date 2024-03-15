class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int highest = 0;
        int m = 1;
        for (int i = 0; i < nums.size(); i++) {
            m *= nums[i];
            if (m > highest) {
                highest = m;
            }
            if (m == 0) {
                m = 1;
            }
        }
        m = 1;
        for (int j = nums.size() - 1; j > -1; j--) {
            m *= nums[j];
            if (m > highest) {
                highest = m;
            }
            if (m == 0) {
                m = 1;
            }
        }
        return highest;
    }
};