#include<iostream>
#define MOD 1000000007
#define N 32768
int a[N],b[N],c[N]={},n,k,i=N;
int main(){
    for(std::cin>>n>>k;--i;a[i]=i<n?i:n)b[i]=n/i;
    while(--k){
        for(;++i<N;)c[i]=(c[i-1]+b[i])%MOD;
        for(b[--i]=c[n/i];--i;a[i]=c[i])b[i]=(b[i+1]+1LL*a[i]*(n/i-n/(i+1)))%MOD;
    }
    std::cout<<b[1];
}
