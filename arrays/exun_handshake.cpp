// Problem: Exun Handshake
// Platform: CodeChef
// Contest: Starters (Oct 2026)
// Approach: Greedy + Sorting.
// - Sort the array of group sizes in ascending order.
// - Iterate through the sorted groups and keep a running total of people.
// - For each group, check if the new total handshakes (P * (P-1) / 2) <= M.
// - If yes, invite them and increment the group count. If no, break.
// Time Complexity: O(N log N) - Due to sorting the array.
// Space Complexity: O(N) - To store the array of group sizes.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	std::cin >> T;
	while(T--)
	{
	    int N;
	    long long M;
	    std::cin >> N >> M;
	    
	    vector<long long> A(N);
	    for(int i = 0; i < N; i++)
	    {
	        std::cin >> A[i];
	    }
	    
	    sort(A.begin(), A.end());
	    long long current_people = 0;
	    int groups_invited = 0;
	    
	    for(int i = 0; i < N; i++)
	    {
	        long long new_people = current_people + A[i];
	        long long new_handshakes = (new_people * (new_people - 1)) / 2;
	        
	        if(new_handshakes <= M)
	        {
	            current_people = new_people;
	            groups_invited++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    
	    std::cout << groups_invited << "\n";
	}

}
