class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        int minSum = nums[0], maxSum = nums[0], currMax = 0, currMin = 0;
        for(int i = 0; i < n; i++){
            totalSum += nums[i];
            currMax = max(currMax + nums[i], nums[i]);
            maxSum = max(maxSum, currMax);
            currMin = min(currMin + nums[i], nums[i]);
            minSum = min(minSum, currMin);
        }
        return (maxSum > 0 ? max(maxSum, totalSum - minSum) : maxSum);
    }
};
