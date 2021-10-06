class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,1);
        int p = 1;
        // product on the left side
        for(int i = 0; i < n; i++){
            res[i] = p;
            p = p * nums[i];
        }
        
        p = 1;
        //product on the right side
        for(int i = n-1; i >= 0; i--){
            res[i] = res[i] * p;
            p = p * nums[i];
        }
        return res;
    }
};