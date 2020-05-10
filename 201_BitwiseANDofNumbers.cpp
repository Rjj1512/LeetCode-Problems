class Solution {
public:
    int rangeBitwiseAnd(int m, int b) {
        if(m==0)
            return 0;
        while(m < b) {
            b -= (b & -b);
        }
        
        return b;
    }
};