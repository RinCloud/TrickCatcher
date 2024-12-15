#include<bits/stdc++.h>
using namespace std;

vector<long long> a;
vector<long long> c;

long long computeMaximumScore(long long n, long long m) {
    long long ans = -1e18;
    
    for(int i=1;i<=n;i++) {
        long long s=i,sum=0,k=0;
        for(int j=1;j<=m;j++){
            s=a[s];
            sum+=c[s];
            ans=max(ans,sum);
            if(s==i){
                k=j;
                break;
            }
        }
        if(m==k||k==0)continue;
        sum=sum*((m-1)/k);
        ans=max(ans,sum);
        long long mm=(m-1)%k+1;
        s=i;
        for(int j=1;j<=mm;j++){
            s=a[s];
            sum+=c[s];
            ans=max(ans,sum);
        }
    }
    
    return ans;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n,m;
    cin>>n>>m;
    
    a.resize(n+1, 0);
    c.resize(n+1, 0);
    
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    
    for(int i=1;i<=n;i++) {
        cin>>c[i];
    }
    
    long long result = computeMaximumScore(n, m);
    
    cout<<result<<"\n";
    return 0;
}

