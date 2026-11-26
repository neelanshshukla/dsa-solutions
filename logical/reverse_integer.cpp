class Solution {
public:
    int reverse(int x) {

        long long rev = 0;
        bool negative = false;
        if(x < 0) negative = true;

        long long num = x;
        num = abs(num);
        while(num > 0)
        {
           long long digit = num % 10;
           if(rev > (INT_MAX - digit) / 10) return 0;
           rev = (rev*10) + digit; 
           num = num / 10;
        }
        if(negative == true) return -rev;
        else return rev;
        
    }
};