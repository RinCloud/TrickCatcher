#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<long long> piles(N);
  for(int i=0; i<N; i++){
    cin >> piles[i];
  }
  
  long long sum = 0;
  for(int i=1; i<N; i++){
    sum += piles[i];
  }
  
  if(N==2){
    if(piles[0] < piles[1]){
      cout << -1 << endl;
    }
    else{
      cout << piles[0] - piles[1] << endl;
    }
  }
  else{
    long long maximum = max(piles[0], sum);
    long long minimum = max(0LL, 2 * piles[0] - sum);
    
    if(maximum < minimum){
      cout << -1 << endl;
    }
    else{
      cout << minimum << endl;
    }
  }
  
  return 0;
}