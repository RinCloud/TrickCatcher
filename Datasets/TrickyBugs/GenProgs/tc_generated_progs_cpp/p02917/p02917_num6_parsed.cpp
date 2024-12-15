#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[110],b[110],n,ans;
    cin>>n;
    for(int i=1;i<=n-1;i++)
        cin>>b[i];
    ans = b[1]; // Initialize ans with first element of B
    for(int j=2;j<=n-1;j++)
    {
        a[j]=min(b[j],b[j-1]);
        ans+=a[j];
    }
    ans+=b[n-1]; // Add the last element of B to ans
    cout<<ans;
    return 0;
}