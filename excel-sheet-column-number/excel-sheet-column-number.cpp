class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for(char c: columnTitle){
            int num = c-'A'+1;
            res = res*26 + num;
        }
        return res;
        //time complexity is O(n)
    }
};