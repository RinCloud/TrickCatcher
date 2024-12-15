#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }
 
    vector<int> stools(N);
    stools[0] = 0;
    for (int i = 1; i < N; i++) {
      if (A[i] > A[i - 1]) {
        stools[i] = stools[i - 1] + A[i] - A[i - 1];
      } else {
        stools[i] = stools[i - 1];
      }
    }
    cout << stools[N - 1] << endl;
    return 0;
}