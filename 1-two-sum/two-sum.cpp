class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> nmap;
        for (int i = 0; i < nums.size(); i++) {
            if (nmap.count(target - nums[i])) {
                return {nmap[target - nums[i]], i};
            }
            nmap[nums[i]] = i;
        }
        return {};
    }
};