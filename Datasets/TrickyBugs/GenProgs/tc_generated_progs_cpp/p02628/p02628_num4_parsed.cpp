#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[1002];
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>A[i];
    sort(A+1,A+n+1);
    int ans = 0;
    for (int num=1;num<=k;num++)
    {
        ans+=A[num];
    }
    cout<<ans;
}