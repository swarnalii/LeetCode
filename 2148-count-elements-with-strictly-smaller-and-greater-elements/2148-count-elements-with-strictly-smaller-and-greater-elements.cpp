class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int minVal = *min_element(nums.begin(), nums.end());
        
        int n = nums.size();
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > minVal and nums[i] < maxVal)
                cnt++;
        }
        return cnt;
    }
};