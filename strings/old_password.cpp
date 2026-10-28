// Problem: Old Password
// Platform: CodeChef
// Contest: Starters (Oct 2026)
// Approach: String indexing. Print the 1st, 3rd, and 5th characters directly.
// Time Complexity: O(1)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while(T--) {
        string S;
        cin >> S;
        
        // Print 1st, 3rd, and 5th characters (0-indexed: 0, 2, 4)
        cout << S[0] << S[2] << S[4] << "\n";
    }
    return 0;
}