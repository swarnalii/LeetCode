class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r = grid.size(), c = grid[0].size();
        vector<vector<int>> ans(r, vector<int>(c,0));
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                int nc = (j+k) % c;
                int nr = (i+(j+k)/c)%r;
                ans[nr][nc] = grid[i][j];
            }
        }
        return ans;
    }
};