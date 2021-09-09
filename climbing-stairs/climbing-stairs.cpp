class Solution {
public:
    int climbStairs(int n) {
        int N = 45; //given constraint
        vector<int> S(N+1,0);
        S[0] = 0, S[1] = 1, S[2] = 2;
        for(int i = 3; i <= N; i++)
            S[i] = S[i-1] + S[i-2];
        return S[n];
    }
};