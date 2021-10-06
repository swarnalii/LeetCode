class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int i = 0;
        while (i < n) {
            if (nums[i] != nums[nums[i]-1]) 
                swap(nums[i], nums[nums[i]-1]);
            else i++;
        }
        for (i = 0; i < n; i++) {
            if (nums[i] != i + 1) 
                ans.push_back(nums[i]);
        }
        return ans;
    }
};