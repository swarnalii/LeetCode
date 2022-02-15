class Solution {
public:
    int singleNumber(vector<int>& nums) {
//         XOR has some properties, like x^x = 0 and x^0 = x , where x is some integer.
//         According to the problem statement, every element appears twice except for one.
//         And we have to find that single one.
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans = ans ^ nums[i];
        }
        return ans;
        // using extra space
        // int n = nums.size(), ans = 0;
        // unordered_map<int, int> mp;
        // for(int i = 0; i < n; i++){
        //     mp[nums[i]]++;
        // }
        // for(auto p : mp){
        //     if(p.second == 1){
        //         ans = p.first;
        //         break;
        //     }
        // }
        // return ans;
    }
};