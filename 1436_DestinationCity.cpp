class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> city;
        for(int s = 0 ; s<paths.size(); s++) {
            city.insert(paths[s][0]);
        }
        string x;
        for(int s = 0 ; s<paths.size(); s++) {
            if(!city.count(paths[s][1]))
                x = paths[s][1];
        }
        return x;
    }
};