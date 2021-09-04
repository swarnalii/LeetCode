class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int  n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        int leftSum = 0, rightSum = sum, ans = -1;
        for(int i=0;i<n;i++){
            rightSum =  rightSum - nums[i];
            if(leftSum == rightSum){
                return i;
                break;
            }
            leftSum = leftSum + nums[i];
        }
        return -1; 
    }
};