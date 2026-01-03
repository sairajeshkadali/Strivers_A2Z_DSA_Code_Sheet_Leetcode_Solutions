class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int, int> hashMap;
        vector<int> sol;
        for (int i = 0; i < n; i++)
            hashMap[nums[i]]++;
        
        for(auto it : hashMap){
            if(it.second > n / 3)
                sol.emplace_back(it.first);
        }
        return sol;
    }
};