class Solution {
public:
    int dp[100001];
   
    int checkwin(int n){
        if(dp[n] != -1)
            return dp[n];
        for(int i = 1; i * i <= n ; i++){
            if(checkwin(n - i*i) == 0)
                return dp[n] = 1;
        }
        return dp[n] = 0;
    }
    bool winnerSquareGame(int n) {
        memset(dp, -1, sizeof(dp));
        return checkwin(n);
    }
};