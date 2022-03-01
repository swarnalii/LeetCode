class Solution {
public:
     int hammingWeight(int n) {
        int cnt = 0;
        while(n > 0){
            cnt++;
            n = n & (n-1);
        }
        return cnt;
    }
    
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){
            int res = hammingWeight(i);
            ans.push_back(res);
        }
        return ans;
    }
};