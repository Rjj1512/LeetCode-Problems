class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> st;
        int ans = 0;
        for(char c : S) {
            st[c]++;
        }
        for(char c : J) {
            ans += st[c];
        }
        return ans;
    }
};