#include <iostream>
using namespace std;

#define LOOP(i,n) for(int i = 0; i < n; ++i)

int main()
{
  int n, result = 0;
  int v[21], c[21];
  cin >> n;
  LOOP(i,n) cin >> v[i];
  LOOP(i,n) cin >> c[i];
  LOOP(i,n) if(v[i] - c[i] > 0) result += v[i] - c[i];
  cout << result << "\n";
}
