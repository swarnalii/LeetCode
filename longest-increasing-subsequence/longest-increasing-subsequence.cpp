class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<int> res;
    //     res.push_back(nums[0]);
    //     for(int i=1;i<n;i++){
    //         if(res.back()<nums[i])
    //             res.push_back(nums[i]);
    //         else{
    //             int ind = lower_bound(nums.begin(), nums.end(), nums[i])-nums.begin();
    //             res[ind]=nums[i];
    //         }
    //     }
    //     return res.size();
        //time complexity is O(nlogn)

        int n=nums.size();
        vector<int> d(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j])
                    d[i]=max(d[i], d[j]+1);
            }
        }
        int ans = d[0];
        for(int i=1;i<n;i++){
            ans = max(ans, d[i]);
        }
        return ans;
        //using two loops, time complexity O(n*n)
    }
};