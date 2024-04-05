class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> maps;
        unordered_map<char, int> mapt;
        for (int i = 0; i < s.length(); i++) {
            maps[s[i]]++;
        }
        for (int i = 0; i < t.length(); i++) {
            mapt[t[i]]++;
        }
        for (auto& [chr, count]: maps) {
            if (maps[chr] != mapt[chr]) return false;
        }
        return true;
    }
};