// Problem: Rhythmic Lock
// Platform: CodeChef
// Contest: Starters (Oct 2026)
// Approach: Keep track of the current consecutive streak. Reset when broken.
// Time Complexity: O(N) per test case
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        
        int door_open = 0;
        int streak = 1;
        
        for(int i = 1; i < N; i++) {
            if(S[i] == S[i-1]) {
                streak++;
            } else {
                streak = 1;
            }
            
            if(streak == 3) {
                door_open++;
                streak = 0; // Reset so the next press starts a fresh count
            }
        }
        
        cout << door_open << "\n";
    }
    return 0;
}