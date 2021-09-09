class Solution {
public:
    int fib(int n) {
        vector<int> F(31,0);
        F[0] = 0, F[1] = 1;
        for(int i = 2; i< 31;i++){
            F[i] = F[i-1] + F[i-2];
        }
        return F[n];
    }
};