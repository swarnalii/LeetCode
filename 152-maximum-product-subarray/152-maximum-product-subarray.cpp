class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0], n = nums.size();
        int cur_max=ans, cur_min=ans;
        for(int i=1;i<n;i++){
            if(nums[i]<0)
                swap(cur_max, cur_min);
            cur_max=max(nums[i], cur_max*nums[i]);
            cur_min=min(nums[i], cur_min*nums[i]);
            ans=max(ans, cur_max);
        }
        return ans;
        // time complexity is O(n)
    }
};