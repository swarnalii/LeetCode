class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len1 = t.size(), len2 = s.size();
        int dp[len1+1][len2+1]; 
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= len1; i++){
            for(int j = 1; j <= len2; j++){
                if(t[i-1] == s[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        if(dp[len1][len2] == len2)
            return true;
        else return false;
    }
};