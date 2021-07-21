class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int prod=1, cnt=0;
        //solution using window sliding technique
        for(int start=0,end=0;end<n;end++){
            prod=prod*nums[end];
            //if product is greater than or equal to k then sliding the window 
            //that is excluding the left most element
            while(prod>=k && start<end)
                prod/=nums[start++];
            //if product is less, then incrementing the cnt
            if(prod<k)
                cnt+=end-start+1;
        }
        return cnt;
        //time complexity is O(n) as all elements are accessed at most 2 times
    }
};