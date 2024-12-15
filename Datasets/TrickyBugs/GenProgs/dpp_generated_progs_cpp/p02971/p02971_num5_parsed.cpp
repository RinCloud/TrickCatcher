#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   int N;
   cin >> N;

   vector<int> sequence(N);
   for (int i = 0; i < N; i++) {
      cin >> sequence[i];
   }

   int globalMax = *max_element(sequence.begin(), sequence.end());

   for (int i = 0; i < N; i++) {
      int localMax = (sequence[i] == globalMax ? *max_element(sequence.begin(), sequence.begin() + i) : globalMax);
      cout << localMax << "\n";
   }

   return 0;
}