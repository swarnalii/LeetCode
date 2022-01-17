class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n = pattern.size();
        unordered_map<char, int> patMap;
        unordered_map<string, int> sMap;
        stringstream str(s);
        string word;
        int i = 0;
        while(str >> word){
            if(i == n or patMap[pattern[i]] != sMap[word])
                return false;
            patMap[pattern[i]] = sMap[word] = i+1;  //assigning i+1 as the value to avoid 0 since map will assign default 0 value for non-existing keys
            i++;
        }
        return i == n;
    }
};

