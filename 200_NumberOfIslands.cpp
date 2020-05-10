class Solution {
public:
    
    void dfs(vector<vector<char>>& grid, int row, int col) {
        if(row < 0 || col < 0 || row >= grid.size() || col >= grid[row].size() || grid[row][col] == '0')
            return;
        
        grid[row][col] = '0';
        
        dfs(grid, row+1, col);
        dfs(grid, row, col-1);
        dfs(grid, row-1, col);
        dfs(grid, row, col+1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() == 0)
            return 0;
        int numofislands;
        
        for(int row = 0; row<grid.size(); row++)
            for(int col = 0; col<grid[row].size(); col++)
                if(grid[row][col] == '1') { 
                    dfs(grid, row, col);
                    numofislands++;
                }
        
        return numofislands;
                
    }
};