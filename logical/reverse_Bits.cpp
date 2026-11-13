class Solution {
public:
    int reverseBits(int n) 
    {
        int res = 0;
        int count = 1;
        while(count <= 32)
        {
            int bit = n & 1;
            res <<= 1;
            res |= bit;
            n >>= 1;
            count++;
        }
        return res;
    }
};