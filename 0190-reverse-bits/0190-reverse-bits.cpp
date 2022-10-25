class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> bits(n);
        for(int i = 0; i < bits.size()/2; i++){
            int temp = bits[i];
            bits[i] = bits[bits.size()-i-1];
            bits[bits.size()-i-1] = temp;
        }
        return (uint32_t) bits.to_ulong();
    }
};