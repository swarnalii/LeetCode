class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i, j;
        for(i = 0, j = i+1; i < n and j < n; j++){
            if(nums[i] == 0){
                if(nums[j] != nums[i])
                    swap(nums[i++], nums[j]);
            }
            else i++;
        }
    }
};