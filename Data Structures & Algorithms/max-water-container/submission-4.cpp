class Solution {
public:
    int maxArea(vector<int>& heights) {
        size_t result {0};

        size_t i {0};
        size_t r {heights.size() - 1};

        while (i < r) {
            size_t area {static_cast<size_t>(min(heights[i], heights[r])) * (r - i)};
            result = max(result, area);

            if (heights[i] <= heights[r]) i++;
            else r--;
        }
        return result;
    }
};
