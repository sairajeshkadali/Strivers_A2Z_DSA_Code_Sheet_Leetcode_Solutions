class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, n = nums.size();
        long long prefixSum = 0;
        unordered_map<long long, int> freqSet;
        freqSet[prefixSum]++;
        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];
            int remSum = prefixSum - k;
            if (freqSet.find(remSum) != freqSet.end())
                count += freqSet[remSum];
            freqSet[prefixSum]++;
        }
        return count;
    }
};