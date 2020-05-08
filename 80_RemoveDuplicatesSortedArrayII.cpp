class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 2;
        if(n<=2)
            return n;
        int i = 1, j = 1;
        int c = 1;
        while(i<n) {
            if(nums[i] == nums[i-1]) {
                if(c < k) {
                    nums[j++] = nums[i];
                    ++c;
                }
            }
            else {
                nums[j++] = nums[i];
                c = 1;
            }
            ++i;
        }
        return j;
    }
};