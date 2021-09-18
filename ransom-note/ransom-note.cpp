class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        int cnt[26]={0};
        for(int i = 0; i < magazine.size(); i++){
            cnt[magazine[i]-'a']++;
        }
        
        int x = 0;
        for(int i = 0; i < n; i++){
            if(cnt[ransomNote[i] - 'a'] >= 1){
                cnt[ransomNote[i] - 'a']--;
                x++; //to keep the count of no of found char
            }
        }
        
        if(x == n)
            return true;
        else return false;
    }
};