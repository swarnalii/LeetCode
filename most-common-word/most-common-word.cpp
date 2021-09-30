class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> st(banned.begin(), banned.end());
        unordered_map<string, int> cnt;
        for(int i = 0; i < paragraph.size(); i++){
            if(isalpha(paragraph[i]))
                paragraph[i] = tolower(paragraph[i]);
            else paragraph[i] = ' ';
        }
        stringstream s(paragraph);
        string word;
        pair<string, int> ans("", 0);
        while(s >> word){
            if(st.find(word) == st.end()){ //if the word doesn't exist in banned words
                if(++cnt[word] > ans.second) //keeping track of the highest freq word
                    ans = make_pair(word, cnt[word]);
            }
        }
        return ans.first;
    }
};