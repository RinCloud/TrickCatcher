#include<iostream>
#define N 32768
long long a[N],b[N],c[N]={},n,k,i=N;
int main(){
    for(std::cin>>n>>k;--i;a[i]=i<n?i:n)b[i]=n/i;
    while(--k){
        for(;++i<N;)c[i]=c[i-1]+b[i];
        for(b[--i]=c[n/i];--i;a[i]=c[i])b[i]=(b[i+1]+a[i]*(n/i-n/(i+1)))%1000000007;
    }
    std::cout<<b[1];
}