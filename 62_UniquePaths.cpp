class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> grid(n, vector<int>(m,1));
        for(int i=1; i<n; i++) {
            for(int j=1; j<m; j++) {
                grid[i][j] = grid[i][j-1] + grid[i-1][j];
            }
        }
        return grid[n-1][m-1];
    }
};