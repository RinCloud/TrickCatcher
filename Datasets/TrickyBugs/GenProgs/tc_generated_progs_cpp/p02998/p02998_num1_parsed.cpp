#include <bits/stdc++.h>
using namespace std;
long long n,now,X[100005],Y[100005],H[100005],q,ans;
struct V {
    long long x,y;
} A[100005];
struct X {
    long long an1,an2,f;
} Q[200005];
long long Find(long long i) {
    if(Q[i].f==i)return Q[i].f;
    return Q[i].f=Find(Q[i].f);
}
void BU(long long a,long long b) {
    a=Find(a),b=Find(b);
    if(a^b) {
        Q[a].an1+=Q[b].an1;
        Q[a].an2+=Q[b].an2;
        Q[b].f=a;
    }
}
int main() {
    scanf("%lld",&n);
    for(long long i=1; i<=n; i++) {
        scanf("%lld %lld",&A[i].x,&A[i].y);
        if(!X[A[i].x]) {
            X[A[i].x]=++q;
            Q[q].an2=1;
            Q[q].f=q;
        }
        if(!Y[A[i].y]) {
            Y[A[i].y]=++q;
            Q[q].an1=1;
            Q[q].f=q;
        }
    }
    for(long long i=1; i<=n; i++)
        BU(X[A[i].x],Y[A[i].y]);
    for(long long i=1; i<=n; i++){
        q=Find(X[A[i].x]);
        if(!H[q]){
            H[q]=1;
            ans+=Q[q].an1*Q[q].an2;
        }
        q=Find(Y[A[i].y]);
        if(!H[q]){
            H[q]=1;
            ans+=Q[q].an1*Q[q].an2;
        }
    }
    ans-=n;
    printf("%lld",ans);
    return 0;
}
