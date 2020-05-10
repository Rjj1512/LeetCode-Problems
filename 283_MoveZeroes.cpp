class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, j=i+1;
        while(i <= j && j < nums.size()){
            if(nums[i] == 0) {
                if(nums[j] != 0) {
                    nums[i] = nums[i] ^ nums[j];
                    nums[j] = nums[i] ^ nums[j];
                    nums[i] = nums[i] ^ nums[j];
                    ++i;
                }
                ++j;
            }
            else {
                ++i;
                ++j;
            }
                
        }
    }
};