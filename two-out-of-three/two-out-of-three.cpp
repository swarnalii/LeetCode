class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> res;
        for(int i = 0; i < nums1.size(); i++){
            if((find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end() or 
                find(nums3.begin(), nums3.end(), nums1[i]) != nums3.end()) and
                    find(res.begin(), res.end(), nums1[i]) == res.end())
                res.push_back(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++){
            if((find(nums1.begin(), nums1.end(), nums2[i]) != nums1.end() or 
                find(nums3.begin(), nums3.end(), nums2[i]) != nums3.end()) and
                    find(res.begin(), res.end(), nums2[i]) == res.end())
                res.push_back(nums2[i]);
        }
        for(int i = 0; i < nums3.size(); i++){
            if((find(nums2.begin(), nums2.end(), nums3[i]) != nums2.end() or 
                find(nums1.begin(), nums1.end(), nums3[i]) != nums1.end()) and
                    find(res.begin(), res.end(), nums3[i]) == res.end())
                res.push_back(nums3[i]);
        }
        return res;
    }
};