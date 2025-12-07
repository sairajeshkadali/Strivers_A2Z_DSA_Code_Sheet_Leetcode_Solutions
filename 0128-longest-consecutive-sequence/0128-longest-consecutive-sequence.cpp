class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int currSeqCount = 1, prevEle = nums[0], maxSeqCount = 1;
        for (int i = 1; i < n; i++)
        {
            if(nums[i] == prevEle)
            {
                continue;
            }else if ((nums[i] - 1) == prevEle)
            {
                ++currSeqCount;
                maxSeqCount = max(maxSeqCount, currSeqCount);
            }else
            {
                currSeqCount = 1;
            }
            prevEle = nums[i];
        }
        return maxSeqCount;
    }
};