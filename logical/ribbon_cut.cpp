#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	std::cin >> N;
	
	int p1 = 1;
	while((p1 + (2*p1)) <= N)
	{
	    if(p1 + (2*p1) == N) 
	    {
	        std::cout << "YES";
	        break;
	    }
	    p1++;
	}
	if(p1 + (2*p1) > N) std::cout << "NO";
}
