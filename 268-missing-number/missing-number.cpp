#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        // int sum = 0;
        // for (int i = 0; i < n; i++) {
        //     sum += nums[i];
        // }
        // return ((n * (n + 1)) / 2) - sum;

        int sum=0, n=nums.size(); 
        for (int i=0 ; i<n; i++)
            sum^=i^nums[i];
        return sum^n;
    }
};
auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();