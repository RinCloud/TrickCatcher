#include <iostream>
#include <vector>

using namespace std;
 
int main() {
  long long N;
  cin >> N;
  vector<long long> A(N+1);
  for(int i=0; i<N+1; i++){
    cin >> A[i];
  }
  long long sum = 0;
  for(int i=0; i<N; i++){
    long long B;
    cin >> B;
    sum += min(A[i], B);
    B -= A[i];
    if(B > 0){
      sum += min(B, A[i+1]);
      A[i+1] -= B;
      if(A[i+1] < 0){
        A[i+1] = 0;
      }
    }
  }
  cout << sum;
}
