class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        // unordered_map<char, int> map;
        // for (int i = 0; i < s.length(); i++) {
        //     map[s[i]]++;
        // }
        // for (int i = 0; i < t.length(); i++) {
        //     map[t[i]]--;
        // }
        // for (auto& [chr, count]: map) {
        //     if (map[chr] != 0) return false;
        // }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};