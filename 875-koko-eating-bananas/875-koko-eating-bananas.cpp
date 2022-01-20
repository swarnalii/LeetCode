class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int left = 1, right = *max_element(piles.begin(), piles.end());
        while(left < right){
            int middle = left + (right - left)/2;
            int hrspent = 0;
            
            for(int pile: piles)
                hrspent += (pile + middle - 1)/middle;
            
            if(hrspent <= h)
                right = middle;
            else left = middle + 1;
        }
        return right;
    }
};