#include<iostream>
using namespace std;
long long A;
string B;

int main()
{
  cin >> A >> B;
  double T = stod(B);
  cout << (long long)(A * T) << endl;
}
