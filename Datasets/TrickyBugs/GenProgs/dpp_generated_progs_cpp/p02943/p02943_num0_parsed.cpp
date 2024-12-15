#include <iostream>
#include <algorithm>

using namespace std;

string lexicographicallySmallestString(string S, int N, int K) {
   string T = S;
   reverse(T.begin(), T.end());

   string U = S + T;

   int numReplacements = min(K, N);
   for (int i = 0; i < numReplacements; i++) {
       string S_prime = U.substr(i, N);
       S = min(S, S_prime);
   }

   return S;
}

int main() {
   int N, K;
   cin >> N >> K;
   string S;
   cin >> S;

   string smallestString = lexicographicallySmallestString(S, N, K);
   cout << smallestString << endl;

   return 0;
}