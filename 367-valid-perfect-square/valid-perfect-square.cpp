class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1)
        return true;;
        for (int i = 2; i <= num/2; i++) {
            long long temp = i;
            if (temp * temp == num) {
                return true;
            }
        }
        return false;
    }
};