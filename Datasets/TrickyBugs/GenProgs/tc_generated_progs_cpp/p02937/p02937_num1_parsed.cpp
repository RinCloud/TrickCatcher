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
  for(int i=0;i<sz;i++)
  {
    x=t[i]-'a';
    if(v[x].size()==0){cout<<"-1\n";return 0;}

    auto sp=*upper_bound(v[x].begin(),v[x].end(),len);
   if(sp==*v[x].end())
   {
     sp=*v[x].begin();
     sum+=s.size();
   }
   sum+=sp-len;
   len=sp;
  }

  cout<<sum<<"\n";
  return 0;
}