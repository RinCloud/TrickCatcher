#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin>>N;
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++)  s.at(i)=(s.at(i)-'A'+N)%26+'A';
  cout<<s<<endl;
}
