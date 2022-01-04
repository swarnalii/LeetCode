// class Solution {
// public:
//     int bitwiseComplement(int n) {
        
//     }
// };

class Solution {
public:
    int bitwiseComplement( int n) {
        // x = no of bits
        // generate a number having x set of bits
        // temp = 1<<x - 1 (doing left shift of 1 by x)
        // n ^ temp 
        if(n == 0)
            return 1;
        int x = floor(log2(n))+1; // finding the no of bits
        
        int temp= ((1 << x) - 1) ^ n;
        
        return temp;
        
        
    }
};