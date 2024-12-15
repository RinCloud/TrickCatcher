#include<bits/stdc++.h>

using namespace std;

#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
typedef long long LL;
int N;
LL C[11234];
LL S[11234];
LL F[11234];
int main(){
    while(cin>>N){
        REP(i,N-1) cin>>C[i]>>S[i]>>F[i];
        REP(i,N-1){
            LL now = S[i] + C[i]; // Adding initial waiting time to current time
            // Calculate the earliest time we can reach Station N from Station i
            FOR(j,i,N-1){
                // Calculate the waiting time for the next train at Station j
                LL wait_time = ((now + F[j] - 1) / F[j]) * F[j] - now;
                now += wait_time + C[j]; // Update current time
            }
            cout<<now<<endl;
        }
        cout<<0<<endl;
    }
    return 0;
}