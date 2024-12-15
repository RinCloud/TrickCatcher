#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> sticks(N);
  for (int i = 0; i < N; i++) {
    cin >> sticks[i];
  }
  
  sort(sticks.rbegin(), sticks.rend());
  
  long long int maxArea = 0;
  for (int i = 0; i + 3 < N; i++) {
    if (sticks[i] == sticks[i + 1]) {
      if (i + 2 < N && sticks[i + 2] == sticks[i + 3]) {
        maxArea = max(maxArea, (long long int)sticks[i] * sticks[i + 2]);
      }
      i++;
    }
  }
  
  cout << maxArea << endl;
  
  return 0;
}