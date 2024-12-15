#include <bits/stdc++.h>
using namespace std;
long long n, m;

int main ()
{
   cin >> n >> m;

   if (n <= 0 || m <= 1) {
      cout << 0;
      return 0;
   }

   long long cnt = min(n, m/2);
   m -= (cnt * 2);
   cnt += m/4;

   cout << cnt;

   return 0;
}
