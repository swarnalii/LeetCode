class Solution {
public:
    int bitwiseComplement( int n) {
        // x = no of bits
        // generate a number having x set of bits
        // temp = 1<<x - 1 (doing left shift of 1 by x)
        // n ^ temp 
        if(n == 0)
            return 1;
        int x = (log2(n))+1; // finding the no of bits
        
        int temp= ((1 << x) - 1) ^ n;
        
        return temp;
    }
};

// We are capturing log2(x) into int, so it rounds down things. For example:
// log2(1) = 0,  but 1 bit is used
// log2(2) = 1, but 2 bits used
// log2(3) = 1.xx, rounded down to 1. It should be 2
// log2(4) = 2, it should be 3.
// So we add 1 to the result to get correct number of bits.

// In next line we are doing -1 to get the mask with all 1s.
// e.g, let's say we need a mask of 3 bits i.e., 111.
// So, we left shift 1 by 3 = (1 << 3) = 8 = 1000
// When we do -1, we get 8-1 = 7 = 111
