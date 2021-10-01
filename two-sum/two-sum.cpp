class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            auto pos = mp.find(nums[i]);
            if(pos != mp.end()){
                res.push_back(pos->second);
                res.push_back(i);
            }
            else{
                mp[target-nums[i]] = i;
            }
        }
        return res;
    }
};