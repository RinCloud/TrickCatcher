#include <bits/stdc++.h>

using namespace std;

int main()
{
  string x[3]; cin >> x[0] >> x[1] >> x[2];

  int currentPlayer = 0;
  while (true) {
    if (x[currentPlayer].size() == 0) {
      char ch = currentPlayer + 'A';
      cout << ch;
      return 0;
    }
    char tmp = x[currentPlayer][0];
    currentPlayer = tmp - 'a';
    x[tmp-'a'].erase(0,1);
  }
}