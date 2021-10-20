class Solution {
public:
    string reverseWords(string str) {
        stringstream s(str);
        string word, ans;
        vector<string> v;
        while(s >> word){
            v.push_back(word);
        }
        for(int i = v.size()-1; i >= 0; i--){
            ans += v[i];
            if(i > 0)
                ans += " ";
        }
        return ans;
    }
};