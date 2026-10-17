// Problem: Valid Anagram
// Platform: LeetCode
// Link: https://leetcode.com/problems/valid-anagram/
// Approach: Sort both strings and compare them
// Time Complexity: O(n log n) - Due to the sorting algorithms
// Space Complexity: O(1) - Sorting in-place (ignoring recursion stack space)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};