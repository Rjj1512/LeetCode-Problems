class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size() == 2)
            return true;
        int x1 = coordinates[0][0], x2 = coordinates[1][0];
        int y1 = coordinates[0][1], y2 = coordinates[1][1];
        double m = 0, s = 0;
        if(x1!=x2)
            m = (y2-y1)/(x2-x1);
        else
            m = INT_MAX;
        for(int i = 2; i<coordinates.size(); i++) {
            x1 = x2, y1 = y2;
            x2 = coordinates[i][0], y2 = coordinates[i][1];
            if(x1!=x2)
                s = (double)(y2-y1)/(x2-x1);
            else
                s = INT_MAX;
            if(m != s)
                return false;
        }
        return true;
    }
};