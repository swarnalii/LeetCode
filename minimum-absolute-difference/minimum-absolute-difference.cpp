class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX, curDiff = 0;
        
        for(int i = 0; i < n-1; i++){
            curDiff = arr[i+1] - arr[i];
            if(curDiff < minDiff){
                minDiff = curDiff;
                ans.clear();
                ans.push_back({arr[i], arr[i+1]});
            }
            else if(curDiff == minDiff)
                ans.push_back({arr[i], arr[i+1]});
            else continue;
        }
        
        return ans;
    }
};