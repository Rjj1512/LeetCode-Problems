class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = 1, r = 1;
        int n = nums.size();
        vector<int> prod(n,1);
        
        for(int i = 0; i < n; i++) {
            prod[i] *= l;
            l *= nums[i];
        }
        
        for(int j = n-1; j >= 0; j--) {
            prod[j] *= r;
            r *= nums[j];
        }
        
        return prod;
    }
};