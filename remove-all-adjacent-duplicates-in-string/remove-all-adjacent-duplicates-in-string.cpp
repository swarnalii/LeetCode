class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        string res = "";
        for(int i = 0; i < n; i++){
            if(res.size() and s[i] == res.back())
                res.pop_back();
            else res.push_back(s[i]);
        }
        return res;
    }
};