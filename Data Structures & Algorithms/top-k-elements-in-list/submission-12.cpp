class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size() + 1);

        for (int num : nums) {
            count[num]++;
        }
        
        for (auto pair : count) {
            freq[pair.second].push_back(pair.first);
        }

        
        vector<int> result;

        for (int i = freq.size() - 1; i > 0; i--) {

            for(int num : freq[i]) {
                if (result.size() == k) return result;

                result.push_back(num);
            }
        }
        return result;
    }
};
