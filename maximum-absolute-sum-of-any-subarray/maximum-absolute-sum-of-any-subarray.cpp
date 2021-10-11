class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int mx = 0 ,mn = 0, sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            mx = max(sum, mx);
            mn = min(sum, mn);
        }
        return (mx-mn);
    }
};