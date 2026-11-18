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
	    int N, K;
	    std::cin >> N >> K;
	    
	    string S;
	    std::cin >> S;
	    int blocks = 0;
	    
	    for(int i = 1; i < N; i++)
	    {
	        if(S[i] != S[i - 1]) blocks++;
	    }
	    
	    if(blocks < K) std::cout << "YES" << endl;
	    else std::cout << "NO" << endl;
	}
	

}
