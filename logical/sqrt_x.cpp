class Solution {
public:
    int mySqrt(int x)
    {
        long long sqrt;
        for(long long i = 0; i <= x; i++)
        {
            if(i*i > x)
            {
                sqrt =  i-1;
                break;
            }
            else if(i*i == x)
            {
                sqrt = i;
                break;
            }
        }
        return sqrt;
    }
};