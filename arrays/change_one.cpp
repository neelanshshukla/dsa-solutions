// Problem: Change one
// Platform: codechef(contest)
// Link: https://www.codechef.com/viewsolution/1375266253
// Time Complexity:  O(NlogN)
// Space Complexity: O(N)


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin >> T;
    while (T--)
    {
        int N;
        std::cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) 
        {
            cin >> A[i];
        }
        if (N <= 2)
        {
            cout << 0 << endl;
            continue;
        }
        sort(A.begin(),A.end());
        
        int option1 = A[N-2] - A[0]; //change the max
        int option2 = A[N-1] - A[1]; //chnage the min
        cout << min(option1, option2) << endl;  
    }
    return 0;

}