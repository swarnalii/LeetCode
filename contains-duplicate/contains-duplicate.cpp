class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int> s(nums.begin(), nums.end());
        int m = s.size();
        if(n > m)
            return true;
        else return false;
//         wrong sol
//         unordered_map<int, int> mp;
//         for(auto i : nums){
//             mp[nums[i]]++;
//         }
        
//         bool chk = false;
//         for(auto p :  mp){
//             if(p.second >= 2){
//                 chk = true;
//                 break;
//             }
//         }
//         return chk;
        }
};