#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main( void )
{
  /* ボール数入力 */
  long n;
  cin >> n;
  
  /* ボールの番号と番号の数を入力 */
  vector<long> a(n);
  map<long, long> c;
  long ans = 0;
  for ( auto &i : a ) {
    cin >> i;
    ans += c[i]++;
  }

  for ( const auto &i : a ) {
    cout << (ans - (c[i] - 1)) << endl;  
  }
  
  return 0;
}