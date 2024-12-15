#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> s(M);
  vector<int> c(M);
  
  for (int i = 0; i < M; i++) {
    cin >> s[i] >> c[i];
  }
  
  int ans = -1;
  
  for (int i = 0; i < pow(10, N); i++) {
    int x = i;
    bool flag = true;
    
    for (int j = 0; j < M; j++) {
      int digit = N - s[j];
      
      if ((x / int(pow(10, digit))) % 10 != c[j]) {
        flag = false;
        break;
      }
    }
    
    if (flag) {
      ans = i;
      break;
    }
  }
  
  cout << ans << endl;

  return 0;
}