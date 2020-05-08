class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> x;
        int c = 1;
        for(int i=digits.size() - 1; i>=0 ; i--) {
            x.push_back((digits[i]+c)%10);
            c = (digits[i]+c) / 10;
        }
        if(c)
            x.push_back(c);
        reverse(x.begin(), x.end());
        return x;
    }
};