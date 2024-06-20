class Solution {
public:

    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis) {
        vis[i][j] = 1;

        int row[] = {-1, 0, +1, 0};
        int col[] = {0, +1, 0, -1};

        for(int idx = 0; idx < 4 ;idx++) {
            int nrow = i + row[idx];
            int ncol = j + col[idx];

            if(nrow>=0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && !vis[nrow][ncol] && grid[nrow][ncol] == '1') {
                
                
                dfs(nrow, ncol, grid,vis);
                

            }
        }
    }

    void bfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis) {

        queue<pair<int,int>> q;
        q.push({i,j});

        int row[] = {-1, 0, +1, 0};
        int col[] = {0, +1, 0, -1};

        while(!q.empty()) {
            auto node = q.front();

            int i = node.first;
            int j = node.second;

            q.pop();

            vis[i][j]=1;

            for(int idx = 0; idx < 4 ;idx++) {
            int nrow = i + row[idx];
            int ncol = j + col[idx];

            if(nrow>=0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && !vis[nrow][ncol] && grid[nrow][ncol] == '1') {
                
                
                    q.push({nrow, ncol});
                

            }


        }
    }
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m,0));
        int count=0;

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(!vis[i][j] && grid[i][j]=='1') {
                    count++;
                    dfs(i,j,grid,vis);
                    // bfs(i,j,grid,vis);
                }
            }
        }

        return count;

        
    }
};
