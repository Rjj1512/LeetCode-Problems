// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
        int firstBadVersion(int n) {
            int fv = n;
            int l = 1;
            while(l<n) {
                int m = l + (n-l)/2;
                bool a = isBadVersion(m);
                if(a) {
                    fv = m;
                    n = m;
                }
                else
                    l = m+1;
            }
            return fv;
        }
};