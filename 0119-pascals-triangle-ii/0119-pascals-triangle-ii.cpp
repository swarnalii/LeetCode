class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> dp(rowIndex+1);
        for(int i = 0; i <= rowIndex; i++){
            dp[i].resize(i+1);
            dp[i][0] = dp[i][i] = 1;
            for(int j = 1; j < i; j++){
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
        
        // cout<< dp[rowIndex][2];
        // return {0,0};
        vector<int> ans;
        for(int j = 0; j < dp[rowIndex].size(); j++){
            ans.push_back(dp[rowIndex][j]);
        }
        
        return ans;
    }
};

