class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        string res = "";
        for(int i = 0; i < min(m,n); i++){
                res += word1[i];
                res += word2[i];
        }
        
        if(m != n)
            res += (m>n) ? word1.substr(min(m,n)) : word2.substr(min(m,n));
        
        return res;
    }
};