class Solution {
public:
    int maxFrequency(vector <int>& nums, int k)
    {
        int len = nums.size();
        int l = 0, r = 0, maxFreq = 0;
        long long total = 0;

        sort(nums.begin(), nums.end());

        while (r < len)
        {
            total += nums[r];
            while ((long long)nums[r] * (r - l + 1) > total + k)
            {
                total -= nums[l];
                l++;
            }
            maxFreq = max(maxFreq, (r - l + 1));
            r++;
        }
        return maxFreq;
    }
};