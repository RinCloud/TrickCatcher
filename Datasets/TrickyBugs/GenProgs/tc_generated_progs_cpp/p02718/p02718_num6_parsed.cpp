#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,s=0;
    double c=0;
    cin>>n>>m;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--) {
        if(a[i]>=double(s)/(4*m))
        {
            c++;
        }
        else
        {
            break;
        }
    }
    if(c>=m) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
