#include <iostream>
using namespace std;
int main()
{
  int a[10] = {0}, x, c = 0;
  for (int i = 0; i < 3; i++){
    cin >> x;
    c += a[x];
    a[x] = 1;
  }
  cout << (c == 1 ? "Yes" : "No");
}
