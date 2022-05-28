class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), res = 0;
        for(int i = 0; i < n; i++){
            res = res ^ nums[i];
        }
        for(int i = 1; i <= n; i++)
            res = res ^ i;
        return res;
    }
};