class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        int x = n/2;
        for(int i = (-1)*x ; i <= x; i++){
            if(n%2 == 0 and i == 0)
                continue;
            else res.push_back(i);
        }
        return res;
    }
};