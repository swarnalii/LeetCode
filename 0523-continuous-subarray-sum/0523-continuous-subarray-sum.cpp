class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = -1;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(mp.find(sum%k) == mp.end())
                mp[sum%k] = i;
            else if(i - mp[sum%k] > 1)
                return true;
        }
        return false;
    }
};
