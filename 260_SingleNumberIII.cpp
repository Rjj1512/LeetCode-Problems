class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int totxor = 0;
        for(int num: nums)
            totxor ^= num;
        int x = totxor & (-totxor);
        int n1=0,n2=0;
        for(int num: nums)
            if((num & x)!= 0)
                n1 ^= num;
        n2 = n1^totxor;
        
        return vector<int>({n1,n2});
    }
};