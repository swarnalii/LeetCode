class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();
        vector<int> sum(10001, 0);
        for(int i = 0; i < n; i++)
            sum[nums[i]] += nums[i];
        vector<int> dp(10001, 0);
        dp[0] = sum[0], dp[1] = sum[1];
        for(int i = 2; i < sum.size(); i++){
            dp[i] = max(dp[i-2] + sum[i], dp[i-1]);
        }
        return dp[10000];
    }
};