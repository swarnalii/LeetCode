class Solution {
public:
    int tribonacci(int n) {
        vector<int> T(38, 0);
        T[0] = 0, T[1] = 1, T[2] = 1;
        for(int i = 3; i<38; i++){
            T[i] = T[i-3] + T[i-2] + T[i-1];
        }
        return T[n];
    }
};