#include <stack>
#include <map>

class Solution {
public:
    std::map<char, char> m = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    bool isValid(string str) {
        std::stack<char> s;

        for (int i = 0; i < str.length(); i++) {
            char c = str[i];

            if (typeOpen(c)) {
                s.push(c);
            } else {
                if (s.empty()) return false;
                char onTop = s.top();
                if (onTop == m[c]) {
                    s.pop();
                } else {
                    return false;
                }
            }
        }

        return s.empty();
    }

    bool typeOpen(char c) {
        return c == '(' || c == '[' || c == '{';
    }
};
