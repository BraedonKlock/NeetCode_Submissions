class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> brackets {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        stack<char> stack;

        for (char c : s) {
            if (brackets.count(c)) {
                if (!stack.empty() && stack.top() == brackets[c])
                    stack.pop();
                else 
                    return false;
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
