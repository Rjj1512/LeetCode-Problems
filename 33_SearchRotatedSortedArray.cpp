class Solution {
public:
    int pivotSearch(vector<int>& nums, int l, int h, int k) {
        if(l > h)
            return -1;
        
        int m = (l+h)/2;
        
        if(nums[m] == k)
            return m;
        
        if(nums[l] <= nums[m]) {
            if(k >= nums[l] && k <= nums[m])
                return pivotSearch(nums, l, m-1, k);
            
            return pivotSearch(nums, m+1, h, k);
        }
        
        if(k >= nums[m] && k <= nums[h])
            return pivotSearch(nums, m+1, h, k);
        
        return pivotSearch(nums, l, m-1, k);
    }
    
    int search(vector<int>& nums, int target) {
        return pivotSearch(nums, 0, nums.size()-1, target);
    }
};