class Solution {
public:
    vector<bool> vis;
    unordered_map<int, vector<int>> graph;
    void createGraph(int n, vector<vector<int>>& edges) {
        for(auto x : edges) {
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        vis = vector<bool>(n, false);
    }
    
    int dfs(int node, int ogc, vector<bool>& hasApple) {
        if(vis[node])
            return 0;
        vis[node] = true;
        int cc=0;
        for(auto x : graph[node]) {
            cc += dfs(x, 2, hasApple); 
        }
        if(cc == 0 && hasApple[node] == false)
            return 0;
        return ogc+cc;
    }
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        createGraph(n, edges);
        return dfs(0, 0, hasApple);
    }
};