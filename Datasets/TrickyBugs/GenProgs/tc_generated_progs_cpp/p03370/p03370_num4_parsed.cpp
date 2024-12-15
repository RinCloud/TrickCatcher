#include<bits/stdc++.h>
using namespace std;
int ans;


int main(){
    int n,x;
    cin>>n>>x;
    ans=n;
    int a[n];
    for(int i=0;i<n;i++){  // variable i should be initialized to 0
        cin>>a[i];
        x-=a[i];
    }
    sort(a,a+n);
    if(a[0] <= x){  // added condition to check if there is enough Moto to make at least one more doughnut
        ans+=x/a[0];
    }
    cout<<ans<<endl;
    return 0;
}
