#include<bits/stdc++.h>
int main(){
    int A,B,i=1; //initialize i to 1
    std::cin>>A>>B;
    while(i<9999){
        if(i*8/100==A&&i*10/100==B){ //change 2/25 and 1/10 to 8/100 and 10/100 respectively
            std::cout<<i;
            return 0;
        }
        i++;
    }
    std::cout<<-1;
}
