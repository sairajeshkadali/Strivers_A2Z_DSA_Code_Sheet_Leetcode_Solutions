class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), waterCount = 0, maxHeight = -1;
        vector<int> prevGre(n);
        prevGre[0] = prevGre[n - 1] = -1;
        for (int i = 1; i < n - 1; i++) {
            prevGre[i] = max(prevGre[i - 1], height[i - 1]);
        }
        maxHeight = height[n - 1];
        for (int j = n - 2; j >= 1; j--) {
            prevGre[j] = min(prevGre[j], maxHeight);
            maxHeight = max(maxHeight, height[j]);
        }
        for (int i = 1; i < n - 1; i++) {
            if (height[i] < prevGre[i]) {
                waterCount += prevGre[i] - height[i];
            }
        }
        return waterCount;
    }
};