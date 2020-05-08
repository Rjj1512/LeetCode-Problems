class Solution {
public:
    int countElements(vector<int>& arr) {
        map<int,int> cnt;
        int ans = 0;
        for(int a : arr) {
            cnt[a]++;
        }
        for(auto a : cnt) {
            if(cnt.find(a.first+1) != cnt.end())
                ans += a.second;
        }
        return ans;
    }
};