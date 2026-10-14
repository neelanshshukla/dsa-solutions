// Problem: Palindrome Number
// Platform: LeetCode
// Link: https://leetcode.com/problems/palindrome-number/
// Time Complexity: O(log n)
// Space Complexity: O(1)
// Note: Used long long to prevent integer overflow

class Solution {
public:
    bool isPalindrome(int x) 
    {
        int digit = 0;
        long long rev = 0;
        int copy = x;
        while(copy > 0)
        {
            digit = copy % 10;
            rev = (rev*10) + digit;
            copy = copy/10;
        }
        if(rev == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};