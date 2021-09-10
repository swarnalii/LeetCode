class Solution {
public:
    int mainRob(vector<int>& v){
        int n = v.size();
        vector<int> dp(n+1,0);
        dp[0] = 0, dp[1] = v[0];
        for(int i = 1;i < n; i++){
            dp[i+1] = max(dp[i-1] + v[i], dp[i]);
        }
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len<2) return nums[0];
        
        //either house[1] - house[n-1] can be robbed or 
        // house[2] - house[n-2], creating seperate vectors 
        // and following the same procedure as 
        // House robbery
        vector<int> a(nums.begin(), nums.end()-1);
        vector<int> b(nums.begin()+1, nums.end());
        
        return max(mainRob(a), mainRob(b));
    }
};