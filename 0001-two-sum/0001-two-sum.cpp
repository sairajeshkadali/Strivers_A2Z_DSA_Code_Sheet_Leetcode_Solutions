class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector < pair<int, int>> aug_nums;
        for (int i = 0; i < n; i++)
            aug_nums.push_back({nums[i], i});
        sort(aug_nums.begin(), aug_nums.end());
        int left = 0, right = n - 1, sum;
        while(left < right){
            sum = aug_nums[left].first + aug_nums[right].first;
            if(sum == target){
                return vector<int> {aug_nums[left].second, aug_nums[right].second};
            }else if(sum < target){
                left++;
            }else{
                right--;
            }
        }
        return vector<int>();
    }
};