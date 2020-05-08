class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m2 = 0;
        if(prices.size() > 0) {
            int m1 = prices[0];
            for(int p : prices) {
                m1 = min(p, m1);
                m2 = max(m2, p - m1);
            }
        }
        return m2;
    }
};