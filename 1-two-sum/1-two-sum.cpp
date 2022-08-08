class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> m;
        vector<int> res;
        for(int i = 0; i < n; i++){
            int num = target - nums[i];
            if(m.find(nums[i]) != m.end()){
                res.push_back(i);
                auto it = m.find(nums[i]);
                res.push_back(it->second);
            }
            else m.insert({num, i});
        }
        return res;
    }
};