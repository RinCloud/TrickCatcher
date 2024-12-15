#include<bits/stdc++.h>
int main(){
    int A,B,i=0;
    std::cin>>A>>B;
    while(i<9999){
        if(i*108/100==A&&i*110/100==B){
            std::cout<<i;
            return 0;
        }
        i++;
    }
    std::cout<<-1;
}