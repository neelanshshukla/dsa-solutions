#include <bits/stdc++.h>
using namespace std;

// Helper function: Checks if all characters have the exact same frequency
bool isPerfectlyValid(string s) {
    map<char, int> counts;
    for (char c : s) counts[c]++;

    set<int> frequencies;
    for (auto& p : counts) frequencies.insert(p.second);

    // If all characters appear the same number of times, the set size will be 1
    return frequencies.size() == 1;
}

string isValid(string s) {
    // 1. Check if the original string is already valid
    if (isPerfectlyValid(s)) return "YES";

    // 2. Try removing one character at a time and check if it becomes valid
    for (int i = 0; i < s.length(); i++) {
        // Create a new string without the character at index 'i'
        string temp = s.substr(0, i) + s.substr(i + 1);
        
        if (isPerfectlyValid(temp)) {
            return "YES";
        }
    }

    // 3. If no single removal works, it's invalid
    return "NO";
}