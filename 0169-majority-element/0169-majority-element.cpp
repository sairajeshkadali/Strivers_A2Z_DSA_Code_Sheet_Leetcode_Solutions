class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, majority = 0;
        for(int num : nums)
        {
            if (count == 0)
            {
                majority = num;
                count++;
            }
            else if (num != majority)
            {
                count--;
            }else if (num == majority)
            {
                count++;
            }
        }
        if(count)
        {
            return majority;
        }else
        {
            return -1;
        }
    }
};