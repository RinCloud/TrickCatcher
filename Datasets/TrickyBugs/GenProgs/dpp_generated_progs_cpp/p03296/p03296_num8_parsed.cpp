#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  
  int spells = 0;
  for (int i = 1; i < N; i++) {
    if (a[i] == a[i-1]) {
      a[i]++;
      spells++;
    }
  }
  
  cout << spells << endl;
  
  return 0;
}