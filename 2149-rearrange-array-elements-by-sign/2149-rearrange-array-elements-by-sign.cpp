class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(), posIndex = 0, negIndex = 1;
        vector<int> sol(n);
        for (int i = 0; i < n; i++)
        {
            if(nums[i] > 0){
                sol[posIndex] = nums[i];
                posIndex += 2;
            }else{
                sol[negIndex] = nums[i];
                negIndex += 2;
            }
        }
        return sol; 
    }
};