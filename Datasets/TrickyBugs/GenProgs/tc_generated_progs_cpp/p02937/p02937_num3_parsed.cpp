#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int>v[28];
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s,t;

  int x;
  cin>>s>>t;
  for(int i=0;i<s.size();i++)
  {
    x=s[i]-'a';
    v[x].push_back(i+1);
  }
  int a=0,flag=0;
  ll int len=0,sz=t.size(),sum=0;
  for(int i=0;i<10; i++) // change sz to 10 (length of s')
  {
    bool found = false;
    for(int j=0; j<sz; j++)
    {
        x=t[j]-'a';
        auto sp = upper_bound(v[x].begin(), v[x].end(), len);
        if(sp == v[x].end())
        {
            found = true;
            break;
        }
        len = *sp;
    }
    if(!found)
    {
        cout<<i<<"\n";
        return 0;
    }
    sum += s.size();
  }

  cout<<"-1\n";
  return 0;
}
