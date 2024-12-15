#include <iostream>
int main(){
    int X,b;
    std::cin>>X;
    b = 0;
    while(X > b*(b+1)/2){
        b++;
    }
    std::cout<<b<<std::endl;
}
