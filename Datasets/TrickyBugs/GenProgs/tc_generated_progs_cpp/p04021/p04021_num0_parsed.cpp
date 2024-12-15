#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
int ar[MAXN],n,ans,now,br[MAXN];
 
int main(){
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>ar[i];
        br[i]=ar[i];
    }
    sort(br+1,br+1+n);
    for (int i=1;i<=n;i++){
        int tmp=distance(ar,lower_bound(br+1,br+n+1,ar[i]));
        if ((i%2==1 && tmp%2==0) || (i%2==0 && tmp%2==1)) ans++;
    }
    cout<<ans<<"\n";
}
