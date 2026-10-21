// Problem: Exun Quiz
// Platform: CodeChef
// Contest: Starters (Oct 2026)
// Approach: Math/Greedy. 
// - If S < 0, minimum attempts = -S (only wrong answers).
// - If S >= 0, minimum correct answers = ceil(S/4). 
//   Extra points are reduced by wrong answers: wrong = (correct * 4) - S.
// Time Complexity: O(1) per test case.
// Space Complexity: O(1) - No extra space used.

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
         long N;
         long S;
         
         std::cin >> N >> S;
         
         if(S < 0)
         {
             long long wrong = -S;
             if(wrong <= N)
             {
                 std::cout << wrong << "\n";
             }
             else
             {
                std::cout << -1 << "\n";;
             }
         }
         else
         {
             long long correct = (S + 3) / 4;
             
             long long wrong  = (correct*4) - S;
             
             long long total_attempts = correct + wrong;
             
             if(total_attempts <= N)
             {
                 std::cout << total_attempts << "\n";
             }
             else
             {
                 std::cout << -1 << "\n";
             }
         }
         
     }
     return 0;

}
