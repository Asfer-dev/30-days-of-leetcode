class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int highest = -11;
        int m = 1, m2 = 1;
        for (int i = 0, j = nums.size() - 1; i < nums.size(), j > -1; i++, j--) {
            m *= nums[i];
            m2 *= nums[j];
            if (m > highest) {
                highest = m;
            }
            if (m2 > highest) {
                highest = m2;
            }
            if (m == 0) {
                m = 1;
            }
            if (m2 == 0) {
                m2 = 1;
            }
        }
        // m = 1;
        // for (int j = nums.size() - 1; j > -1; j--) {
        //     m *= nums[j];
        //     if (m > highest) {
        //         highest = m;
        //     }
        //     if (m == 0) {
        //         m = 1;
        //     }
        // }
        return highest;
    }
};