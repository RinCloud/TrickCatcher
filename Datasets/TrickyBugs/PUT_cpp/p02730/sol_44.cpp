#include <iostream>
#include <string>
using namespace std;
int main()
{
string s;
bool a=1;
cin>>s;
for (int i=0;i<(s.size()-3)/2;i++)
{
if(s[i]!=s[s.size()-1-i])
a = false;
}
for (int i=0;i<=(s.size()-3)/4;i++)
{
if(s[i]!=s[(s.size()-3)/2-i])
a = false;
}

if(a==false)cout <<"No";
else cout <<"Yes";
}