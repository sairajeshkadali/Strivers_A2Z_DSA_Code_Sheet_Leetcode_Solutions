class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, majority, n = nums.size();
        for(int num : nums)
        {
            if(count == 0)
            {
                majority = num;
                ++count;
            }else if(num == majority){
                ++count;
            }else if(num != majority){
                --count;
            }
        }
        if(count > 0){
            count = 0;
            for(int num : nums){
                if(num == majority)
                    ++count;
            }
            if(count > n /2)
                return majority;
        }
        return -1;
    }
};