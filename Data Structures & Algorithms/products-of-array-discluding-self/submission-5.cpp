class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);

        for (size_t i {1}; i < nums.size(); ++i) {
            result[i] = result[i - 1] * nums[i - 1];
        }

        int postfix {1};

        for (int i = nums.size() - 1; i >=0; --i) {
            result[i] = result[i] * postfix;
            postfix *= nums[i];
        }
        return result;
    }
};
