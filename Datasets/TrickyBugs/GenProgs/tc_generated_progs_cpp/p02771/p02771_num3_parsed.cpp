#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[10] = {0}, x, c = 0; //initialize c as 0
  for (int i = 0; i < 3; i++) //use {} after loop to include next 2 lines in the loop
  {
    cin >> x; //Fix syntax error by using >>
    c += a[x]; //increment c by the value of a[x]
    a[x]++; //increment a[x] by 1
  }
  cout << (c == 1 ? "Yes" : "No");
}
