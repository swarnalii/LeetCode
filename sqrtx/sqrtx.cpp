class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)
            return x;
        int left = 1, right = x;
        while(left < right){
            int mid = left + (right - left)/2;
            // not using mid*mid, since it may cause overflow
            if(x/mid == mid)
                return mid;
            else if(x/mid < mid)
                right = mid;
            else 
                left = mid+1;
        }
        return left-1;
    }
};