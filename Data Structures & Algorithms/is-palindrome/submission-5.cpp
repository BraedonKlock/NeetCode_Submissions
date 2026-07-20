class Solution {
public:
    bool isPalindrome(string s) {
        size_t i {0};
        size_t j {s.length() - 1};

        while (i < j) {
            while (i < j && !isAlpha(s[i])) ++i;
            while (i < j && !isAlpha(s[j])) --j;

            if (i >= j)
                break;

            if (tolower(s[i]) != tolower(s[j]))
                return false;
                ++i;
                --j;
        }
        return true;
    }

    bool isAlpha(char c) {
        return (
            c >= 'A' && c <= 'Z' ||
            c >= 'a' && c <= 'z' ||
            c >= '0' && c <= '9'
        );
    }
};
