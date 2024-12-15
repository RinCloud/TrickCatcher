#include <iostream>
#define MOD 1000000007

using namespace std;

long long power(long long base, long long exponent){
    long long result = 1;
    while(exponent > 0){
        if(exponent % 2 == 1){
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent /= 2;
    }
    return result;
}

int main() {
    int N, M;
    cin >> N >> M;

    // Factorize M
    int factor_count[1000001] = {0};
    for(int i = 2; i <= M; i++){
        while(M % i == 0){
            factor_count[i]++;
            M /= i;
        }
    }

    long long ans = 1;
    for(int i = 2; i <= 1000000; i++){
        ans = (ans * power(i, factor_count[i])) % MOD;
    }

    cout << ans << endl;

    return 0;
}