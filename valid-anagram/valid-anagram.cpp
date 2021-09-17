class Solution {
public:
    bool isAnagram(string s, string t) {
        int cnt1[26]={0}, cnt2[26]={0};
        for(char c: s){
            cnt1[c-'a']++;
        }
         for(char c: t){
            cnt2[c-'a']++;
        }
        for(int i=0;i<25;i++){
            if(cnt1[i] != cnt2[i])
                return false;
        }
        return true;
    }
};