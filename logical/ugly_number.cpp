class Solution {
public:
    bool isUgly(int n) 
    {
        if(n <= 0) return false;
        // saab reductions se pass hokar
        //agar n=1 bacche to means its factors 
        //were only 2,3 or 5
        while(n%2==0) n/=2;
        while(n%3==0) n/=3;
        while(n%5==0) n/=5;
        return n == 1;
    }
};