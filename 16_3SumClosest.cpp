class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), m = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < n - 2; i++) {
            for(int j = i+1, k = n-1; j < k; ) {
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(sum - target) == 0) {
                    return sum;
                }
                if(abs(sum - target) < abs(m - target)) 
                    m = sum;
                if(sum < target) 
                    j++;
                else 
                    k--;
                /*else if(max(sum, m) < 0)
                    j++;
                else
                    k--;*/
            }
        }
        return m; 
    }
};