#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;
  
  long long sum = 0;
  vector<long long> A(N), B(N);
  vector<long long> diff(N);
  
  for(int i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
    sum += A[i];
    diff[i] = A[i] - B[i];
  }

  sort(diff.rbegin(), diff.rend());

  long long candies = 0;
  int idx = 0;
  
  while(idx < N && diff[idx] <= 0) {
    candies += A[idx];
    idx++;
  }

  long long remaining = 0;
  for(int i = idx; i < N; i++) {
    remaining += diff[i];
  }

  candies += max(0LL, remaining - sum);

  cout << candies << endl;
  
  return 0;
}