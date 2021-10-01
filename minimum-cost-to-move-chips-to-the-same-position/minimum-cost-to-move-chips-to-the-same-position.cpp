class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n = position.size();
        int odd = 0, even = 0;
        for(auto num : position){
            if(num&1)
                odd++;
        }
        even = n - odd;
        return min(odd, even);
    }
};