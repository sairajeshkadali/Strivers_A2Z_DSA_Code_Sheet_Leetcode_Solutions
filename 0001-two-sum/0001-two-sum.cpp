class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            int remSum = target - nums[i];
            if(hash.find(remSum) != hash.end()){
                return vector<int> {hash[remSum], i};
            }
            hash[nums[i]] = i;
        }
        return vector<int> {};
    }
};