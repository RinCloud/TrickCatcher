#include<bits/stdc++.h>
using namespace std;
const int N=3e5+5;
int H[N],W[N];
int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif
    int myh,myw,n;
    cin>>myh>>myw>>n;
    for(int i=1;i<=n;++i){
        int h,w;
        cin>>h>>w;
        ++H[h],++W[w];
    }
    int tmph=0,tmpw=0;
    for(int i=1;i<=myh;++i){
        if(tmph<H[i]) tmph=H[i];
    }
    for(int i=1;i<=myw;++i){
        if(tmpw<W[i]) tmpw=W[i];
    }
    int cnth=0,cntw=0;
    for(int i=1;i<=myh;++i){
        if(tmph==H[i]){
            ++cnth;
        }
    }
    for(int i=1;i<=myw;++i){
        if(tmpw==W[i]){
            ++cntw;
        }
    }
    int cnt=0;
    for(int i=1;i<=n;++i){
        int r,w;
        cin>>r>>w;
        if( H[r] == tmph && W[w]==tmpw) ++cnt;
    }
    if(cntw*cnth==cnt) cout<<tmph+tmpw-1;
    else cout<<tmph+tmpw;
    return 0;
}
