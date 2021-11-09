class Solution {
private:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
public:
    int countVowelSubstrings(string word) {
        int n = word.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            set<char> st;
            for(int j = i; j < n; j++){
                if(isVowel(word[j]))
                    st.insert(word[j]);
                else break;
                if(st.size() == 5)   //we found one vowel substring
                    ans++;  
            }
        }
        return ans;
    }
};