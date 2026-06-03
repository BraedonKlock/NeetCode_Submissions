class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<vector<string>> result;
        std::map<string, std::vector<string>> map;

        for (string str : strs) {
            std::vector<int> charCount(26, 0);
            for (char c : str) {
                charCount[c - 'a']++;
            }
            std::string code = to_string(charCount[0]);
            for (int i = 1; i < 26; ++i) {
                code += "," + to_string(charCount[i]);
            }
            map[code].push_back(str);
        }

        for (const auto& pair : map) {
            result.push_back(pair.second);
        }

        return result;
    }
};
