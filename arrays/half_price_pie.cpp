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
	    std::cin >> N;
	    int sum = 0;
	    
	    int A[N]={0};
	    for(int i = 0; i < N; i++)
	    {
	        std:cin >> A[i]; 
	        sum += A[i];
	    }
	    
	    int m=0;
	    
	    for(int i = 0; i < N-1; i++)
	    {
	        m=max(sum-(A[i]+A[i+1])/2,m);
	    }
	    cout << m << endl;
	}

}
