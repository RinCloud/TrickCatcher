#include<iostream>
#include<vector>

typedef long long ll;

const ll P = 200003;

int main(){
    ll N;
    std::cin >> N;

    std::vector<ll> A(N);
    for(ll i = 0; i < N; i++){
        std::cin >> A[i];
    }

    ll sum = 0;
    for(ll i = 0; i < N-1; i++){
        for(ll j = i+1; j < N; j++){
            sum += (A[i] * A[j]) % P;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}