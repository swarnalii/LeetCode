class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while(low < high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                high = mid;
            else low = mid + 1;;
        }
        return nums[low] < target ? low+1 : low;
    }
};