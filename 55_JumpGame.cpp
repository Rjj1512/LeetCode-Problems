class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() <= 1)
            return true;
        int max = nums[0];
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i] == 0 && max <= i)
                return false;
            
            if(i + nums[i] > max) {
                max = i + nums[i];
            }
            
            if(max >= nums.size() - 1)
                return true;
        }
        return false;
    }
};