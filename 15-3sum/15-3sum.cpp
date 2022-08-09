class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < n-2; i++){
            if(i == 0 || (i > 0 && nums[i] != nums[i-1])){
                int low = i+1, high = n-1;
                while(low < high){
                    if(nums[low] + nums[high] == -nums[i]){
                        res.push_back(vector<int>{nums[i], nums[low], nums[high]});  
                        while(low < high && nums[low] == nums[low+1])
                            low++;
                        while(low < high && nums[high] == nums[high-1])
                            high--;
                        low++, high--;
                    }
                    else if(nums[low] + nums[high] < -nums[i])
                        low++;
                    else
                        high--;
                }
            }
        }
        return res;
    }
};