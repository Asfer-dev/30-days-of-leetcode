#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> sta;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                sta.push(s[i]);
            } else {
                if (sta.empty() || s[i] == ')' && sta.top() != '(' || s[i] == '}' && sta.top() != '{' || s[i] == ']' && sta.top() != '[') {
                    return false;
                } else {
                    sta.pop();
                }
            } 
        }
        return sta.empty();
    }
};