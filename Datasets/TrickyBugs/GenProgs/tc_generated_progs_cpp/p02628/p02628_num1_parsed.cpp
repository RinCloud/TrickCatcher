#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A[1002];
  int n,k;
  cin>>n>>k;
  for(int i=1;i<=n;i++) cin>>A[i];
  sort(A+1,A+n+1); // Correction: The array should be sorted from index 1 to n.
  int sum = 0;
  for (int num=1;num<=k;num++)
  {
    sum+=A[num]; // Correction: Increase the sum by the price of each fruit.
  }
  cout<<sum;
}
