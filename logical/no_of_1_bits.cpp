class Solution {
public:
    int hammingWeight(int n) 
    {
        int count = 0;
        while(n != 0)
        {
            int lsb = n & 1;
            if(lsb == 1) count++;
            n >>= 1;
        }
        return count;
    }
};