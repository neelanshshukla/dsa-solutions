#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T ;
    while(T--)
    {
        int N, K;
        cin >> N >> K;
        
        
        if( K <= N && K * 2 >= N)
        {
            cout << "YES" << "\n";;
        }
        else
        {
            cout << "NO" << "\n";
        }
        
    }
}
