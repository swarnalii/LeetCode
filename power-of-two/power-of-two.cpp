class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        if((n & (n-1)) == 0)  // since exactly one set bit of every power of 2 is one
            return true;
        else return false;
    }
};

/**
8 - 1 = 7
1000
0001
-----
0111

1000 & 0111 = 0000

**/
