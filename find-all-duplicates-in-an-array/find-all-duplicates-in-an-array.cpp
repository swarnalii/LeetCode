class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> cnt;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            cnt[nums[i]]++;
        }
        
        vector<int> ans;
        for(auto i : cnt){
            if(i.second > 1)
                ans.push_back(i.first);
        }
        return ans;
    }
};