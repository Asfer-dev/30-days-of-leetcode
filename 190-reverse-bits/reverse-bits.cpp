class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t r = 0b0000000000000000000000000000000;
        for (int i = 0; i < 32; i++) {
            r = r << 1;
            if (n & 1 != 0) {
                r = r | 1;
            }
            n = n >> 1;
        }
        return r;
    }
};