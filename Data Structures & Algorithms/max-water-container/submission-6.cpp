class Solution {
public:
    int maxArea(vector<int>& heights) {
        size_t maxVolume {0};

        int i {0};
        int j {static_cast<int>(heights.size() - 1)};

        while (i < j) {
            size_t volume {static_cast<size_t>(min(heights[i], heights[j])) * (j - i)};
            maxVolume = max(maxVolume, volume);

            if (heights[i] >= heights[j])
                --j;
            else
                ++i;
        }
        return maxVolume;
    }
};
