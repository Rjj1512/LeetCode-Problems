class Solution {
public:
    bool check(string s1, string s2) {
        bool ok = true;
        for(int i = 0; i < s1.length(); i++) {
            ok = ok && s1[i] >= s2[i];
        }
        return ok;
    }
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return check(s1,s2) || check(s2,s1);
    }
};