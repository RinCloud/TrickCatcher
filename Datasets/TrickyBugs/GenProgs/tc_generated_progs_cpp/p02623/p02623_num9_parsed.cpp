#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=2e5+10;
ll K,Cnt,N,M,CstA[MAXN],CstB[MAXN],CurA,CurB=0;
inline void pre(){
    cin>>N>>M>>K;
    for(int i=1;i<=N;i++)
        cin>>CstA[i],CstA[i]+=CstA[i-1];
    for(int i=1;i<=M;i++)
        cin>>CstB[i],CstB[i]+=CstB[i-1];
    CurA=N;
}
int main(){
    pre();
    while(CurA>=0 && CurB<=M){
        while(CurA>0 && CstA[CurA]+CstB[CurB]>K)
            CurA--;
        Cnt=max(Cnt,CurA+CurB);
        CurB++;
    }
    cout<<Cnt;
    return 0;
}