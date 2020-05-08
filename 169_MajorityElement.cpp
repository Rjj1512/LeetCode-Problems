class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int a : nums) {
            mp[a]++;
            if(mp[a] > n/2)
                return a;
        }
        return -1;
    }
};