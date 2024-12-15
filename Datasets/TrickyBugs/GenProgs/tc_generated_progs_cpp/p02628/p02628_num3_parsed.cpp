#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A[1002];
  int n,k;
  cin>>n>>k;
  for(int i=1;i<=n;i++) cin>>A[i];
  sort(A,A+n);
  for (int num=1;num<k;num++)
  {
    A[0]+=A[num];
  }
  cout<<A[0];
}