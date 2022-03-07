class Solution {
public:
    vector<string> cellsInRange(string s) {
        string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        
        char col1 = s[0], col2 = s[3];
        int row1 = s[1] - '0', row2 = s[4] - '0';
        vector<string> ans;
        for(auto i = alpha.find(col1); i <= alpha.find(col2); i++){
            for(int j = row1; j <= row2; j++){
                char x = alpha[i];
                int y = j;
                string xy = x + to_string(y);
                ans.push_back(xy);
            }
        }
        return ans;
    }
};