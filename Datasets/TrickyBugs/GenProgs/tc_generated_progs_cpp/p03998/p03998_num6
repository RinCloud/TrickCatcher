#include <bits/stdc++.h>

using namespace std;

int main()
{
  string x[3]; cin >> x[0] >> x[1] >> x[2];

  char cur = x[0][0];
  while (true) {
    if (x[cur-'a'].size() == 0) {
      cout << char(cur - 32);
      return 0;
    }
    char tmp = cur;
    cur = x[tmp-'a'][0];
    x[tmp-'a'].erase(x[tmp-'a'].begin());
  }
}