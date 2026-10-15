// Problem: Roman to Integer
// Platform: LeetCode
// Link: https://leetcode.com/problems/roman-to-integer/
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:

    int getValue(char c)
    {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }
    int romanToInt(string s)
    { 
        long long sum = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            int currentval = getValue(s[i]);
            if(i + 1 < s.length() && currentval < getValue(s[i + 1]))
            {
                sum -= currentval;
            }
            else
            {
                sum += currentval;
            }
        }

        return sum;
    }
};