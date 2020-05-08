class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int o = 0, t = 0;
        for(int i=0; i<nums.size(); i++) {
            o = (o ^ nums[i]) & ~t;
            t = (t ^ nums[i]) & ~o;
        }
        return o;
    }
};