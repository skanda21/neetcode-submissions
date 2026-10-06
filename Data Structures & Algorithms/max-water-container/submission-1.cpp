class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0, r = n - 1;

        int maxArea = 0;
        while (l < r) {
            int width = r - l;
            int height = min(heights[l],heights[r]);

            int area = width * height;

            maxArea = max(maxArea, area);
            if (heights[l] > heights[r]) r--;
            else if (heights[r] > heights[l]) l++;
            else {
                if (heights[l + 1] > heights[r - 1]) r--;
                else if (heights[r - 1] > heights[l + 1]) l++;
                else {
                    l++;
                    r--;
                }
            }
        }

        return maxArea;
    }
};
