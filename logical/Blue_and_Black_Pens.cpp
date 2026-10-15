// Problem: Black and Blue Pens
// Platform: codechef(contest)
// Link: https://www.codechef.com/viewsolution/1375135375
// Time Complexity:  O(1)
// Space Complexity: O(1)


#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int A, B;
    cin >> A >> B; // A = cost of one blue pen B = cost of one black pen
    int option1 = 3 * A;          // 3 blue pens
    int option2 = A + B;          // 1 blue + 1 black
    cout << min(option1, option2) << endl;
    return 0;
}
