class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> result;

        //loop through vector 
        //grab each string
        //loop through string and convert each char to an index in a vector
        //convert vector to a string and push string to result vector
        for (auto& str : strs) {
            vector<int> charCode(26, 0);

            for (auto c : str) {
                charCode[c - 'a']++;
            }

            std::string code = to_string(charCode[0]);
            for (int i {0}; i < 26; ++i) {
                code += "," + to_string(charCode[i]);
            }

            map[code].push_back(str);
        }

        for (const auto& pair : map) {
            result.push_back(pair.second);
        }
        return result;
    }
};
