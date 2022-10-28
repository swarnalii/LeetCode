class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string& s: strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto& p: mp){
            ans.push_back(p.second);
        }
        return ans;
        //time complexity is O(nklogk),where klogk is 
        //the time complexity of sorting the strings
    }
};