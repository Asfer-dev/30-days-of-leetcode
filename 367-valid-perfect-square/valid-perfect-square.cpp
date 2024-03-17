class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1)
        return true;;
            long long temp = 2;
        while (temp <= num/2) {
            if (temp * temp == num) {
                return true;
            }
            temp++;
        }
        return false;
    }
};