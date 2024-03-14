class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single = 0;
        for (auto& n: nums) {
            single = single ^ n;
        }
        return single;
    }
};