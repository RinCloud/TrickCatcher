#include<bits/stdc++.h>
int main(){
int A,B,i;
std::cin>>A>>B;
while(i<9999){
if(i*2/25==A&&i/10==B){
std::cout<<i;
return 0;
}
i++;
}
std::cout<<-1;
}