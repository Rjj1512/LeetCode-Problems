class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() < 3)
            return res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n - 2; i++) {
            if(nums[i] > 0)
                break;
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            for(int j = i+1, k = n-1; j < k; ) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    res.push_back(vector<int>{nums[i],nums[j],nums[k]});
                    while(j < k && nums[j] == nums[++j]);
                    while(j < k && nums[k] == nums[--k]);                
                }
                else if(nums[i] + nums[j] + nums[k] < 0)
                    j++;
                else
                    k--;
            }
        }
        return res;
    }
};