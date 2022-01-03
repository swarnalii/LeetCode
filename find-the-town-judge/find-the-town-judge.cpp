class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> cnt(n+1, 0);
        vector<int> judge(n+1, 0);
        for(int i = 0; i < trust.size(); i++){
            cnt[trust[i][0]]++;
            judge[trust[i][1]]++;
        }
    
        // for(int i = 1; i <= n; i++){
        //     if(judge[i] != n-1 and judge[i] > 0)
        //         return -1;
        // }
        for(int i = 1; i <= n; i++){
            if(cnt[i] == 0 and judge[i] == n-1)
                return i;
        }
        return -1;
    }
};

// 3
// [[1,2],[2,3]]
// output: -1