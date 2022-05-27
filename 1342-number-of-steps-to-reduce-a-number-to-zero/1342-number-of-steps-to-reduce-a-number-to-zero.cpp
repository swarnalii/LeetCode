class Solution {
public:
    int countSteps(int n){
        vector<int> dp(1000001, 0);
        dp[0] = 0, dp[1] = 1;
        for(int i = 2; i <= 1000000; i++){
            if(i%2 == 0)
                dp[i] = 1 + dp[i/2];
            else dp[i] = 1 + dp[i-1];
        }
        return dp[n];
    }
    int numberOfSteps(int num) {
        return countSteps(num);
    }
};