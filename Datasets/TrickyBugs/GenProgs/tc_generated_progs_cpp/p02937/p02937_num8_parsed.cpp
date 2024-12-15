#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int>v[28];
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s,t;
  cin>>s>>t;
  
  for(int i=0;i<s.size();i++)
  {
    int x=s[i]-'a';
    v[x].push_back(i+1);
  }
  
  ll int len=0,sz=t.size(),sum=0;
  for(int i=0;i<sz;i++)
  {
    int x=t[i]-'a';
    if(v[x].empty()) {cout<<"-1\n";return 0;}
    
    auto sp = upper_bound(v[x].begin(),v[x].end(),len);
    if(sp==v[x].end())
    {
       sp = v[x].begin();
       sum += s.size();
    }
    sum += *sp - len;
    len = *sp;
  }

  cout<<sum<<"\n";
  return 0;
}
