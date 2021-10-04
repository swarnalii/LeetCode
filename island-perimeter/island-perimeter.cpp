class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0, neighbours = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    cnt++;
                    if(i != 0 and grid[i-1][j] == 1)
                        neighbours++;
                    if(j != 0 and grid[i][j-1] == 1)
                        neighbours++;
                }
            }
        }
        return (4*cnt - 2*neighbours);
    }
};