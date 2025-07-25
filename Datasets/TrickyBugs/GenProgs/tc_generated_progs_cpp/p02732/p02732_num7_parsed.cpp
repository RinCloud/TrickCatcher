#include <iostream>
#include <vector>

using namespace std;

int main( void )
{
  /* ボール数入力 */
  long n;
  cin >> n;
  
  /* ボールの番号を入力 */
  vector<long> a(n);
  for ( auto &i : a ) {
    cin >> i;
  }
  
  /* 番号の数をカウント */
  vector<long> c(n+1);
  for ( const auto &i : a ) {
    c[i]++;
  }
  
  /* カウント数を使って答えを計算 */
  long ans = 0;
  for ( const auto &count : c ) {
    ans += count * (count - 1) / 2;
  }

  for ( const auto &i : a ) {
     long count = c[i];
     long result = ans - (count - 1);
     cout << result << endl;
   }
  
  return 0;
}
