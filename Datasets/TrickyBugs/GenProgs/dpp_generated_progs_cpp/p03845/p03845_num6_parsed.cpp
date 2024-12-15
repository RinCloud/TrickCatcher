#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> T(N);
  for(int i = 0; i < N; i++) {
    cin >> T[i];
  }
  
  int M;
  cin >> M;
  
  for(int i = 0; i < M; i++) {
    int P, X;
    cin >> P >> X;
    
    int totalTime = 0;
    for(int j = 0; j < N; j++) {
      if(j + 1 == P) {
        totalTime += X;
      } else {
        totalTime += T[j];
      }
    }
    
    cout << totalTime << endl;
  }
  
  return 0;
}