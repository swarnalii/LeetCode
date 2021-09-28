class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1 = 0, sum2 = 0;
        for(char c : s)
            sum1 += c -'a';
        for(char c : t)
            sum2 += c -'a';
        char ans = sum2 - sum1 + 'a';
        return ans;
    }
};