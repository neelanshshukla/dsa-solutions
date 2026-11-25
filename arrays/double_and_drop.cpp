#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
	    int N;
	    cin >> N;
	    
	    int A[N];
	    long long sum = 0;
	    int max_val = 0;
	    
	        for(int i = 0; i < N; i++)
	        {
	          cin >> A[i];
	          sum += A[i];
	          if(A[i] > max_val) max_val = A[i];
	        }
	        
	        long long highest_val = 0;
	        
	    for(int i = 0; i < N; i++)
	    {
	        long long new_sum = sum + A[i];
	        long long new_max = max(max_val, 2 * A[i]);
	        
	        long long current_val = new_sum - new_max;
	        
	        if(current_val > highest_val) highest_val = current_val;
	    }
	    cout << highest_val << "\n";
	}

}
