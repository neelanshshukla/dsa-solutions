// Problem: Valid Palindrome
// Platform: LeetCode
// Link: https://leetcode.com/problems/valid-palindrome/
// Time Complexity: O(n) - We iterate through the string once with two pointers.
// Space Complexity: O(1) - No extra memory used, just two pointer variables.


class Solution {
public:
    bool isPalindrome(string s) 
    {
        int left = 0;
        int right = s.length() - 1;

        while(left < right)
        {
            while(left < right && !isalnum(s[left]))
            {
                left++;
            }

            while(left < right && !isalnum(s[right]))
            {
                right--;
            }

            if(tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }

            left += 1;
            right -= 1;
        }

        return true;
    }
};