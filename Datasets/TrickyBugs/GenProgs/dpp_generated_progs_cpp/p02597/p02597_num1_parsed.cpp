#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int N;
  string stones;
  cin >> N >> stones;

  int num_swaps = 0;
  int num_changes = 0;

  // Iterate through the stones
  for (int i = 0; i < N; i++) {
    // Check if a white stone is placed to the immediate left of a red stone
    if (i > 0 && stones[i-1] == 'W' && stones[i] == 'R') {
      num_swaps++;
    }

    // Count the number of red stones that need to be changed to white
    if (stones[i] == 'R') {
      num_changes++;
    }
  }

  // The minimum number of operations is the maximum of num_swaps and num_changes
  int min_operations = max(num_swaps, num_changes);
  cout << min_operations << endl;

  return 0;
}