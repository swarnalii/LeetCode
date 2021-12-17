class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        if(m == 0)
            return 0;
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        int maxLen = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == '1'){
                    if(i == 0 or j == 0)
                        dp[i][j] = 1;
                    else dp[i][j] = 1 + min({dp[i-1][j], dp[i-1][j-1], dp[i][j-1]});
                    maxLen = max(maxLen, dp[i][j]);
                }
            }
        }
        return maxLen * maxLen;
    }
};