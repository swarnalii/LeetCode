class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int n = numbers.size();
        int low = 0, high = n - 1;
        while(low < high){
            int sum = numbers[low] + numbers[high];
            if(sum == target){
                res.push_back(low+1);
                res.push_back(high+1);
                break;
            }
            else if(sum > target)
                high--;
            else low++;
        }
        return res;
    }
};