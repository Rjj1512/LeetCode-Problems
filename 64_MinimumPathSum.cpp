class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        //int sum = 0;
        int l = 0, u = 0;
        int n = grid.size(), m = grid[0].size();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(i==0 && j==0) {
                    grid[i][j] += 0;
                }
                else if(j == 0) {
                    grid[i][j] += grid[i-1][j];
                }
                else if(i == 0){
                    grid[i][j] += grid[i][j-1]; 
                }
                else {
                    grid[i][j] = min(grid[i][j]+grid[i][j-1], grid[i][j]+grid[i-1][j]);
                }
            }
        }
        return grid[n-1][m-1];
    }
}; 