class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = -1, j;
        for(i = n-2; i >= 0; i--){
            if(nums[i+1] > nums[i]){
                break;
            }
        }
        if(i >= 0){
            for(j = n-1; j > i; j--){
                if(nums[j] > nums[i]){
                    swap(nums[i], nums[j]);
                    break;
                }
            }
        }
        reverse(nums.begin()+i+1, nums.end());
    }
};

