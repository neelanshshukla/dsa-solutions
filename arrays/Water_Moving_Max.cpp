// Problem: Water Moving Max
// Platform: codechef(contest)
// Link: https://www.codechef.com/viewsolution/1375321079
// Time Complexity:  O(NlogN)
// Space Complexity: O(N)


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin >> T;
	while(T--)
	{
	    long long N;
	    long long K;
	    std::cin >> N >> K;
	    vector<long long> A(N);
	    
	    for(int i = 0 ; i < N ; i++)
	    {
	        std::cin >> A[i];
	    }
	    
	    sort(A.begin(), A.end(), greater<long long>()); //descending sort
	    // we arrange in descending order to maximize the water added
	    long long sum = 0;
	    long long limit = min(K + 1LL, N);
	    for(int i =0; i < limit; i++)
	    {
	        sum += A[i];
	    }
	    std::cout << sum << "\n";
	}
	return 0;

}