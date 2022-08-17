class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> res;
        vector<string> codes = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i = 0; i < words.size(); i++){
            string s = "";
            for(char c: words[i]){
                s += codes[c - 'a'];
            }
            res.insert(s);
        }
        return res.size();
    }
};