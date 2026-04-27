class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int r = heights.size() - 1;
        int result = 0;

        while (i < r) {
            int area = min(heights[i], heights[r]) * (r - i);
            result = max(result, area);

           if ( heights[i] <= heights[r]) {
            i++;
           } else {
            r--;
           }
        }
        return result;
    }
};
