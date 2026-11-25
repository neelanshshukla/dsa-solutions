#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int R;
    cin >> R;
    
    if(R == 1) return 7;
    else if(R == 2) cout << 5 << "\n";
    else if(R == 3) cout << 5 << "\n";
    else if(R == 4) cout << 4 << "\n";
    else if(R == 5) cout << 3 << "\n";
    else if(R == 6) cout << 2 << "\n";
    else if(R == 7) cout << 1 << "\n";
    else if(R == 8) cout << 0 << "\n";
    
    return 0;

}
