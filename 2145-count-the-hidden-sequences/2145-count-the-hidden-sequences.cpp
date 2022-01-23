class Solution {
public:
    int numberOfArrays(vector<int>& diff, int lower, int upper){
        int n = diff.size();
        long a = 0, minVal = 0, maxVal = 0;
        for(auto num : diff){
            a += num;
            minVal = min(a, minVal);
            maxVal = max(a, maxVal);
        }
        return max(0L, (upper - lower) - (maxVal - minVal) + 1);
            
        // int n = diff.size();
        // int cnt = 0;
        // for(int i = lower; i <= upper; i++){
        //     int val = i;
        //     for(int j = 0; j < n; j++){
        //         val += diff[j];
        //         if(val < lower or val > upper)
        //             break;
        //     }
        //     if(val == lower or val == upper or (val > lower and val < upper))
        //         cnt++;
        // }
        // return cnt;
    }
};