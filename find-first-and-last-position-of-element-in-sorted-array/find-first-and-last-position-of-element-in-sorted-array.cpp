class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        res.push_back(findStart(nums, target));
        res.push_back(findEnd(nums, target));
        return res;
    }
private:
    int findStart(vector<int>& nums, int target){
        int ind = -1;
        int start = 0, end = nums.size()-1;
        while(start <= end){
            int mid = (end - start)/2 + start;
            if(nums[mid] >= target)
                end = mid -1;
            else
                start = mid + 1;
            if(nums[mid] == target)
                ind = mid;
        }
        return ind;
    }
    int findEnd(vector<int>& nums, int target){
        int ind = -1;
        int start = 0, end = nums.size()-1;
        while(start <= end){
            int mid = (end - start)/2 + start;
            if(nums[mid] <= target)
                start = mid + 1;
            else
                end = mid - 1;
            if(nums[mid] == target)
                ind = mid;
        }
        return ind;
    }
};