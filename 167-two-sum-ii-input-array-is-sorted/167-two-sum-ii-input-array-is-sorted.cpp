class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res;
//         for(int i = 0; i < n; i++){
            
//         }
        int i = 0, j = n-1;
        while(i < j){
            int sum = nums[i] + nums[j];
            if(sum == target){
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            }
            else if(sum > target){
                j--;
            }
            else i++;
        }
        return res;
    }
};