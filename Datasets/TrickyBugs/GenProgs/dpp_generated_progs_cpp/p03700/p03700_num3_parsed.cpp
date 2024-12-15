#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  
  vector<int> health(N);
  for (int i = 0; i < N; i++) {
    cin >> health[i];
  }
  
  long long explosions = 0;
  
  for (int i = 0; i < N; i++) {
    int diff = health[i] - B;
    explosions++;
    
    if (diff > 0) {
      int remaining = diff % (A - B);
      explosions += (diff - 1) / (A - B);
      
      if (remaining > 0) {
        explosions++;
      }
    }
  }
  
  cout << explosions << endl;
  
  return 0;
}
