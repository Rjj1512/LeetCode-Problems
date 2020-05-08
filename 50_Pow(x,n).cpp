class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 || x==1)
            return 1;
        else if(n<0)
            return (1/x) * 1/myPow(x, abs(n+1)); 
        else if (n%2)
            return x*myPow(x,n-1);
        return myPow(x*x,n/2);
    }
};