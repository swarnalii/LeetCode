class Solution {
public:
    int minDeletions(string s) {
        int ch[26] = {0};
        for(char c : s)
            ch[c - 'a']++;
        
        unordered_set<int> used;
        int res = 0;
        
        for(int i = 0;  i < 26; i++){
            int freq = ch[i];
            while(freq > 0){
                if(used.find(freq) == used.end()){
                    used.insert(freq);
                    break;
                }
                freq--;
                res++;
            }
        }
        
        return res;
    }
};