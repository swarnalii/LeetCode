class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        for(auto p : mp){
            if(p.second == 1){
                ans = p.first;
                break;
            }
        }
        return ans;
    }
};