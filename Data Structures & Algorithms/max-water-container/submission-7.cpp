class Solution {
public:
    int maxArea(vector<int>& heights) {
        if (heights.size() == 0) return 0;
        
        size_t maxVolume {0};

        size_t i {0};
        size_t j {heights.size() - 1};

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
