class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int cntCap = 0, ind = -1;
        for(int i = 0; i < n; i++){
            if(isupper(word[i])){
                cntCap++;
                ind = i;
            }
        }
        
        if(cntCap == n or cntCap == 0 or (cntCap == 1 and ind == 0))
            return true;
        return false;
    }
};