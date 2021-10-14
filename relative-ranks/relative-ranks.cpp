class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> ans(n);
        vector<pair <int, int> >temp;
        for(int i = 0; i < n; i++){
            temp.push_back(make_pair(score[i], i));
        }
        
        sort(temp.rbegin(), temp.rend());

        //traversing the vector temp;
        for(int i = 0; i < n; i++){
            if(i == 0)
                ans[temp[i].second]= "Gold Medal";
            else if(i == 1)
                ans[temp[i].second] = "Silver Medal";
            else if(i == 2)
                ans[temp[i].second] = "Bronze Medal";
            else ans[temp[i].second] = to_string(i+1);
        }
        return ans;
    }
};