class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int line=1; line<=numRows; line++){
            int c=1;
            vector<int> rows;
            for(int i=1;i<=line;i++){
                rows.push_back(c);
                c=c*(line-i)/i;
            }
            res.push_back(rows);
            //rows.clear();
        }
        return res;
    }
};