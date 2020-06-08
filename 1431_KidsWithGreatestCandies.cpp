class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> kwc;
        int m = candies[0];
        for(int a : candies) {
            m = max(a, m);
        }
        for(int a : candies) {
            if(a + extraCandies >= m)
                kwc.push_back(true);
            else
                kwc.push_back(false);
        }
        return kwc;
    }
};