#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[110],b[110],n,ans=0; //initialize ans to 0
    cin>>n;
    for(int i=1;i<=n-1;i++)
        cin>>b[i];
    for(int j=1;j<=n-1;j++) //start from index 1 instead of 2
    {
        a[j]=min(b[j],b[j+1]); //change to j+1 to access b[j+1]
        ans+=a[j];
    }
    cout<<ans+b[1]+b[n-1]; //change to b[n-1] to access the last element
    return 0;
}
