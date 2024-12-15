#include<iostream>
using namespace std;
long long A;
string B;

int main()
{
  cin >> A >> B;
  int T = 100*(B[0]-'0') + 10*(B[2]-'0') + (B[3]-'0');
  cout << A*T/100 << endl;
  return 0;
}
