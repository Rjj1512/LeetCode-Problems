class Solution {
public:
    int findComplement(int N) {
        int n = 1;
        while(N > n)
            n = n*2 + 1;
        return n^N;
    }
};