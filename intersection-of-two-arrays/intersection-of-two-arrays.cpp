class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        unordered_map <int, int> cnt;
        for(int i = 0; i < n1; i++){
            cnt[nums1[i]]++;
        }
        
        vector<int> ans;
        for(int i = 0; i < n2; i++){
            if(cnt[nums2[i]] >= 1){
                cnt[nums2[i]] = 0;
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};