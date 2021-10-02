class Solution {
public:
    static bool sortCol(const vector<int>& v1, const vector<int>& v2 ) {
            return v1[1] < v2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), sortCol);
        int finishTime = intervals[0][1];
        int cnt = 1;
        for(int i = 1; i < n; i++){
            if(intervals[i][0] >= finishTime){
                finishTime = intervals[i][1];
                cnt++;
            }
        }
        return (n-cnt);
    }
};