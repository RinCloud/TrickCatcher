#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main( void )
{
  /* ボール数入力 */
  long n;
  cin >> n;
  
  /* ボールの番号と番号の数を入力 */
  vector<long> a(n), c(n);
  long ans = 0;
  unordered_map<long, long> count;
  for ( auto &i : a ) {
    cin >> i;
    ans += count[i];
    count[i]++;
  }

  for ( const auto &i : a ) {
    cout << (ans - (count[i] - 1)) << endl;  
  }
  
  return 0;
}