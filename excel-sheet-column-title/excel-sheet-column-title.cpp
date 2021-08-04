class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n = columnNumber;
        string ans;
        while(n>0){
            n--;
            int rem = n%26;
            n /=26;
            ans.push_back(rem + 'A');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};