class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ind = -1, sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            sum += nums[i];
        }
        
        int leftSum = 0, rightSum = sum;
        for(int i = 0; i < n; i++){
            rightSum -= nums[i];
            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        }
        return ind;
    }
};