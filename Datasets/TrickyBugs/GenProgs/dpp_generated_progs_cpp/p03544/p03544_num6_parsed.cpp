#include <iostream>

long long findLucasNumber(int n){
    long long lucas0 = 2;
    long long lucas1 = 1;
    long long lucasN;

    if(n == 0)
        return lucas0;
    else if(n == 1)
        return lucas1;
    else{
        for(int i=2; i<=n; i++){
            lucasN = lucas1 + lucas0;
            lucas0 = lucas1;
            lucas1 = lucasN;
        }
        return lucasN;
    }
}

int main(){
    int n;
    std::cin >> n;

    long long nthLucas = findLucasNumber(n);
    std::cout << nthLucas << std::endl;

    return 0;
}
