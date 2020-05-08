class Solution {
public:
    void leftrotate(string &s, int d) 
    { 
        reverse(s.begin(), s.begin()+d); 
        reverse(s.begin()+d, s.end()); 
        reverse(s.begin(), s.end()); 
    }
    
    string stringShift(string s, vector<vector<int>>& shift) {
        int d = 0;
        int n = s.length();
        for(int i=0; i<shift.size(); i++) {
            if(shift[i][0] == 0)
                d += shift[i][1];
            else
                d -= shift[i][1];
        }
        
        if(d==0)
            return s;
        else if(d < 0)
            leftrotate(s, n-(abs(d)%n));
        else
            leftrotate(s,d%n);
        
        return s;
    }
};