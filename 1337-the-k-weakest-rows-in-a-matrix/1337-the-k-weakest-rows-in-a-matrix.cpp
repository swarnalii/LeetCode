class Solution {
public:
    struct compfunc{
        constexpr bool operator()(const pair<int,int> &a, const pair<int,int> &b){
            if(a.first != b.first)
                return (a.first > b.first);
            else return (a.second > b.second);
        }
    };
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> cnt;
        for(int i = 0; i < mat.size(); i++){
            int c = 0;
            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j] == 1)
                    c++;
            }
            cnt.push_back({c, i});
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, compfunc> pq(cnt.begin(), cnt.end());
        
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};