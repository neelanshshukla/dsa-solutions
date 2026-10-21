// Problem: Exun Leaderboard
// Platform: CodeChef
// Contest: Starters (Oct 2026)
// Approach: Math. The number of teams strictly between rank X and Y is |X - Y| - 1.
// Time Complexity: O(1) - Single mathematical operation.
// Space Complexity: O(1) - No extra space used.

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int X, Y;
    std::cin >> X >> Y;
    
    int bt = std::abs(X - Y) - 1;
    
    std::cout << bt << "\n";
    return 0;
}
