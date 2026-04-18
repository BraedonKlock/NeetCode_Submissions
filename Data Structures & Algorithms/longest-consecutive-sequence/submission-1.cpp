class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> result;
        int  res = 0;

        for (int num : nums) {
            if (!result[num]) {
                result[num] = result[num - 1] + result[num + 1] + 1;
                result[num - result[num - 1]] = result[num];
                result[num + result[num + 1]] = result[num];
                res = max(res, result[num]);

            }
        }
        return res;
    }
};
