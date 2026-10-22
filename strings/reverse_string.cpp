// Problem: Reverse String
// Platform: LeetCode
// Link: https://leetcode.com/problems/reverse-string/
// Time Complexity: O(n) - We iterate through half of the array.
// Space Complexity: O(1) - In-place modification using two pointers.

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        
        while(left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};