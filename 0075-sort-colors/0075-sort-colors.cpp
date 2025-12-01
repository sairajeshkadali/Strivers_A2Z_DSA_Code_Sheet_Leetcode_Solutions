class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> frequency(3,0);
        for(int num : nums){
            if(num == 0)
                ++frequency[0];
            else if(num == 1)
                ++frequency[1];
            else if(num == 2)
                ++frequency[2];
        }
        int index = 0;
        for(int i=1; i<=frequency[0]; i++){
            nums[index] = 0;
            ++index;
        }
        for(int i=1; i<=frequency[1]; i++){
            nums[index] = 1;
            ++index;
        }
        for(int i=1; i<=frequency[2]; i++){
            nums[index] = 2;
            ++index;
        }
    }
};