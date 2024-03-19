class Solution {
public:
    int getSum(int a, int b) {
        if (a == 0) return b;
        if (b == 0) return a;
        bool addition = true;
        bool neg = false;
        int av = a;
        int bv = b;
        if (a < 0) {
            neg = true;
            addition = !addition;
            av = add(~a, 1);
        }
        if (b < 0) {
            neg = true;
            addition = !addition;
            bv = add(~b, 1);
        }
        int ans;
        if (addition) {
            ans = add(av, bv);
        } else {
            if (bv > av) {
                int t = av; av = bv; bv = t;
                t = a; a = b; b = t;
            }
            if (a > 0) neg = false;
            ans = subtract(av, bv);
        }
        if (neg)
            return comp(ans);
        else 
            return ans;
    }

    int add(int a, int b) {
        int c = 0;
        int s = 0;
        int ans = 0;
        for (int i = 0; i < 32; i++) {
            int ai = a & (1 << i);
            int bi = b & (1 << i);
            if (ai && bi && c) {
                s = (1 << i);
                c = (1 << i);
            } else if ((ai && bi && !c) || (!ai && bi && c) || (ai && !bi && c)) {
                s = 0;
                c = (1 << i);
            } else if (ai | bi | c != 0) {
                s = (1 << i);
                c = 0;
            } else {
                s = 0;
                c = 0;
            }
            ans = ans | s;
        }
        return ans;
    }

    int subtract(int a, int b) {
        int c = 0;
        int s = 0;
        int ans = 0;
        for (int i = 0; i < 12; i++) {
            int ai = a & (1 << i);
            int bi = b & (1 << i);
            if (ai < bi) {
                for (int j = i+1; j < 32; j++) {
                    c = a & (1 << j);
                    if (c > 0) {
                        c = 2;
                        for (int k = j-1; k > i; k--) {
                            a = a | (1 << k);
                        }
                        a = a & ~(1 << j);
                        break;
                    }
                }
                s = 1;
            }
            s = ai ^ bi;
            ans = ans | s;
        }
        return ans;
    }

    int comp(int a) {
        int ans = add(~a, 1);
        return ans;
    }
};