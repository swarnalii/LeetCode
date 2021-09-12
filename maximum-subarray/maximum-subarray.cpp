class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> sum(n,0);
        sum[0] = nums[0];
        for(int i = 1; i < n; i++){
            sum[i] = max(sum[i-1] + nums[i], nums[i]);
            // cout<<"max sum at pos"<<i<<": "<< sum[i] <<endl;
        }
        int ans = sum[0];
        for(int i = 0; i < n; i++){
            if(sum[i] > ans)
                ans = sum[i];
        }
        return ans;
    }
};