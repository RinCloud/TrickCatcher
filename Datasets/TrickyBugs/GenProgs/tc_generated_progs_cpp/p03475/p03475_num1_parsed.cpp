#include<bits/stdc++.h>

using namespace std;

#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
typedef long long LL;
int N;
LL C[11234];
LL S[11234];
LL F[11234];
int main() {
    while (cin>>N) {
        REP(i,N-1) cin>>C[i]>>S[i]>>F[i];
        REP(i,N-1) {
            LL now = 0;
            FOR(j,i,N-1) {
                if (now < S[j]) now = S[j];
                if (now % F[j] != 0) now += F[j] - (now % F[j]);
                now += C[j];
            }
            cout<<now<<endl;
        }
        cout<<0<<endl;
    }
    return 0;
}