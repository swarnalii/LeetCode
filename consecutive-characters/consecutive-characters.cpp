class Solution {
public:
    int maxPower(string s) {
        int cnt = 0, max_here = 0;
        for(int i = 1; i < s.size(); i++){
            if(s[i-1] == s[i]){
                cnt++;
                max_here = max(cnt, max_here);
            }
            else cnt = 0;
        }
        return max_here+1;
    }
};