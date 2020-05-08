class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int a: nums) {
            ans = ans^a;   
        }
        return ans^nums[0];
    }
};