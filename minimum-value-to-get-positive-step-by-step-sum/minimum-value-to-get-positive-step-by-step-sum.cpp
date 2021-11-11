class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, ans = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            ans = min(ans, sum);
        }
        return 1-ans;
    }
};