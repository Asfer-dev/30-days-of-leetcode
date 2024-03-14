#include <algorithm>
class Solution {
public:
    bool isPalindrome(int x) {
        return x >= 0 && x == reverse(x);
    }
    unsigned int reverse(int num) {
        unsigned int r = 0;
        while (num != 0) {
            r = r * 10 + (num%10);
            num /= 10;
        }
        return r;
    }
};

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0 || (x != 0 && x % 10 == 0)) {
//             return false;
//         }

//         int reversed = 0;
//         while (x > reversed) {
//             reversed = reversed * 10 + x % 10;
//             x /= 10;
//         }
//         return (x == reversed) || (x == reversed / 10);
//     }
// };