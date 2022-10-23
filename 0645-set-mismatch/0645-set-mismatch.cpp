class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        vector<int> v(nums.size(),0);
        for(int i = 0; i < nums.size(); i++){
            v[nums[i]-1]++;
        }
        int rep = 0, miss = 0;
        for(int i = 0; i < v.size(); i++){
            if(v[i] > 1)
                rep = i + 1;
            else if(v[i] == 0)
                miss = i + 1;
        }
        ans = {rep, miss};
        return ans;
    }
};