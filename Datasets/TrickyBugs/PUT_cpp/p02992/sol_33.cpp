#include<iostream>
#define N 32768
long a[N],b[N],c[N]={},n,k,i=N;
int main(){
for(std::cin>>n>>k;--i;a[i]=i<n?i:n)b[i]=n/i;
while(--k){
for(;++i<N;)c[i]=c[i-1]+b[i];
for(b[--i]=c[n/i];--i;a[i]=c[i])b[i]=(b[i+1]+a[i]*(n/i-n/(i+1)))%0x3B9ACA07;
//for(*b=c[n/--i];--i;a[i]=c[i])*b=b[i]=(*b+a[i]*(n/i-n/(i+1)))%0x3B9ACA07;
}
std::cout<<b[1];
}
