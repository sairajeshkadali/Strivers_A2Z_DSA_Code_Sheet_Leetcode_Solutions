class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), waterCount = 0, minHeight;
        vector<int> prevGre(n), nextGre(n);
        prevGre[0] = nextGre[n-1] = -1;
        for(int i = 1, j = n - 2; i < n; i++, j--){
            prevGre[i] = max(prevGre[i-1], height[i-1]);
            nextGre[j] = max(nextGre[j + 1], height[j + 1]);
        }
        for(int i = 1; i < n - 1; i++){
            minHeight = min(prevGre[i], nextGre[i]);
            if(height[i] < minHeight){
                waterCount += minHeight - height[i];
            }
        }
        return waterCount;
    }
};