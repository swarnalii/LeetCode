class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int moves = 0;
        while(left != right){
            left >>= 1; //left shift = division by 2^i
            right >>= 1;
            moves++;
        }
        return (left<<moves);
    }
};