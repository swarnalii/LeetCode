class Solution {
public:
    static bool sortCol(const vector<int>& v1, const vector<int>& v2 ) {
        return v1[0] < v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int m = intervals.size();
        int n = intervals[0].size();
        if(m == 1)
            return intervals;
        sort(intervals.begin(), intervals.end(), sortCol);
        vector<vector<int>> res;
        for(int i = 0; i < m; i++){
            vector<int> pair;
            if(res.empty() || res.back()[1] < intervals[i][0]){
                pair.push_back(intervals[i][0]);
                pair.push_back(intervals[i][1]);
                res.push_back(pair);
            }
            else{
                res.back()[1] = (max(intervals[i][1], res.back()[1]));
            }
            pair.clear();
        }
        return res;
    }
};