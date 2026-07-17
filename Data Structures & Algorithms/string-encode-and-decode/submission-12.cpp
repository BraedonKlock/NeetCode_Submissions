class Solution {
public:

    string encode(vector<string>& strs) {
        string encode;
        for (const string& str : strs) {
            encode += to_string(str.size()) + "#" + str;
        }
        return encode;
    }

    vector<string> decode(string s) {
        vector<string> decode;

        size_t i {0};
        while (i < s.size()) {
            size_t j {i};
            while (s[j] != '#') {
                j++;
            }
            size_t length = stoi(s.substr(i, j - i));
            i = j + 1;
            decode.push_back(s.substr(i, length));
            i += length;
        }
        return decode;
    }
};
