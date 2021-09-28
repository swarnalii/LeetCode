class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> odd, res;
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 != 0)
                odd.push_back(nums[i]);
            else res.push_back(nums[i]);
        }
        for(int i = 0; i < odd.size(); i++)
            res.push_back(odd[i]);
        return res;
    }
};