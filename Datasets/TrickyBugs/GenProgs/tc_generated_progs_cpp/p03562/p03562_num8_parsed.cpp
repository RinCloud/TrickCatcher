#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<iostream>
#include<sstream>
#include<set>
#include<map>
#include<queue>
#include<bitset>
#include<vector>
#include<limits.h>
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, N) for (int I = 0; I < (N); ++I)
#define REPP(I, A, B) for (int I = (A); I < (B); ++I)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define RS(X) scanf("%s", (X))
#define CASET int ___T; scanf("%d", &___T); for(int cs=1;cs<=___T;cs++)
#define MP make_pair
#define PB push_back
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define LEN(X) strlen(X)
#define PII pair<int,int>
#define VI vector<int>
#define VL vector<long long>
#define VPII vector<pair<int,int>>
#define PLL pair<long long,long long>
#define VPLL vector<pair<long long,long long>>
#define F first
#define S second
typedef long long LL;
using namespace std;
const int MOD = 998244353;
const int SIZE = 1e6+10;
bitset<4000>X,d[4000];
bitset<4000>A[6];
int len[6],Xn;
char s[SIZE];
int N;
void read(bitset<4000>&input,int& l){
    RS(s);
    l=LEN(s);
    input=bitset<4000>(s);
}
int mi_len=0,mi_id=0;
void add(bitset<4000>a,int l){
    for(int j=l;j>=mi_len;j--){
        if(a[j])a^=d[j];
    }
    if(a.none())return;
    for(int j=mi_len-1;j>=0;j--){
        if(a[j]){
            for(int i=mi_len-1;i>=j;i--){
                d[i]=a<<(i-j);
            }
            int original_len=mi_len;
            mi_len=j;
            add(a<<(original_len-j),original_len);
            return;
        }
    }
}
int main(){
    RI(N);
    read(X,Xn);
    REP(i,N)read(A[i],len[i]);
    mi_len=4000;
    REP(i,N){
        if(mi_len>len[i]){
            mi_len=len[i];
            mi_id=i;
        }
    }
    mi_len--;
    for(int i=3999;i>=mi_len;i--){
        d[i]=A[mi_id]<<(i-mi_len);
    }
    REP(i,N){
        if(i==mi_id)continue;    // Fix index
        add(A[i],len[i]-1);
    }
    bitset<4000>fin=X;
    LL ans=0;    // Fix variable name
    for(int i=Xn-1;i>=mi_len;i--){
        ans*=2;        // Fix variable name
        if(X[i])ans++;
        ans%=MOD;
        if(fin[i])fin^=d[i];
    }
    bool suc=1;
    for(int i=mi_len-1;i>=0;i--){
        if(fin[i]){
            if(!X[i]){
                suc=0;
            }
            break;
        }
    }
    if(suc)ans++;
    printf("%lld\n",ans%MOD);
    return 0;
}