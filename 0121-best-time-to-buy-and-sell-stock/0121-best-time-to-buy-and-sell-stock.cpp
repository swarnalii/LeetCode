class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrice = INT_MAX, maxProfit = 0;
        int minIndex = 0, maxIndex = 0;
        for(int i = 0; i < n; i++){
            if(prices[i] < minPrice){
                // minIndex = i;
                minPrice = prices[i];
            }
            if(prices[i]-minPrice > maxProfit){
                maxProfit = prices[i]-minPrice;
            }
        }
        return maxProfit;
        
        // TLE soln: 198/211 TC passed :(
        // vector<int> diff(n,0);
        // int ans = INT_MIN;
        // if(n == 1)
        //     return 0;
        // for(int i = 1; i < n; i++){
        //     for(int j = 0; j < i; j++){
        //         diff[i] = max(prices[i] - prices[j], diff[i]);
        //         ans = max(ans, diff[i]);
        //     }
        // }
        // return ans;
    }
};