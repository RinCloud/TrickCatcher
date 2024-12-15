#include <iostream>
using namespace std;

#define LOOP(i,n) for(int i = 0; i < n; ++i)

int main()
{
  int n, s=0; // initialize s
  int v[20], c[20];
  cin >> n;
  LOOP(i,n) cin >> v[i];
  LOOP(i,n) cin >> c[i];
  LOOP(i,n) if(v[i] > c[i]) s += v[i] - c[i]; // fix the condition to v[i] > c[i]
  cout << s << "\n";
}