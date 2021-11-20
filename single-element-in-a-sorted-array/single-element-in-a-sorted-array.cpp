class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while(left < right){
            int mid = (right - left)/2 + left; 
            if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid-1] == nums[mid]))
                left = mid + 1;
            else
                right = mid;
        }
        
        return nums[left];
    }
};