class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int minNum = INT_MAX, ans = 0;
        for(int i = 0; i < n; i++){
            minNum = min(minNum, nums[i]);
            if(nums[i] - minNum > ans)
                ans = nums[i] - minNum;
        }
        return ans == 0 ? -1 : ans;
    }
};