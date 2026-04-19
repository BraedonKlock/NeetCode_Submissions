class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> bracket_pairs {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            if (bracket_pairs.count(c)) {
                if (!stack.empty() && stack.top() == bracket_pairs[c]) {
                    stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
