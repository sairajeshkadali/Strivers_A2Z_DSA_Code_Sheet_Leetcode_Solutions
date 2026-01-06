class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int min = n / 3 + 1;
        unordered_map<int, int> hash;
        vector<int> sol;
        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
            if (hash[nums[i]] == min)
                sol.emplace_back(nums[i]);
        }
        return sol;
    }
};