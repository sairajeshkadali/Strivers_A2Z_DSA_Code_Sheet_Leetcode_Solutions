class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, count = 0;
        for(int num : nums){
            if(num)
                count++;
            else
                count = 0;
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};