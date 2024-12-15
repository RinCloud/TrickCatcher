#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, A, B, C;
  cin >> N >> A >> B >> C;
  
  vector<int> lengths(N);
  for (int i = 0; i < N; i++) {
    cin >> lengths[i];
  }
  
  int min_mp = INT_MAX;
  
  // Generate all possible combinations of three bamboos
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        int mp = 0;
        // Calculate the MP required for each magic
        // Extension Magic
        mp += abs(A - (lengths[i] + lengths[j] + lengths[k]));
        // Shortening Magic
        if (lengths[i] + lengths[j] + lengths[k] < A) {
          mp += (A - (lengths[i] + lengths[j] + lengths[k]));
        }
        // Composition Magic
        if (lengths[i] + lengths[j] + lengths[k] > A) {
          mp += 10;
        }
        mp += abs(B - (lengths[i] + lengths[j] + lengths[k]));
        mp += abs(C - (lengths[i] + lengths[j] + lengths[k]));
     
        min_mp = min(min_mp, mp);
      }
    }
  }
  
  cout << min_mp << endl;
  
  return 0;
}