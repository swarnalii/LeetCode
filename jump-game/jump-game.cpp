class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> jump(n, false);
        jump[n-1] = true;
        for(int i = n-1; i >= 0; i--){
            for(int j = 0; j < i and jump[i]; j++){
                if((i-j) <= nums[j]){
                    jump[j] = true;
                    break;
                }
            }
        }
        if(jump[0])
            return true;
        else return false;
    }
};