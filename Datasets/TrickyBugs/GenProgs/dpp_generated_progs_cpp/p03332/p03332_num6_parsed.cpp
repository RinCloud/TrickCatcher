#include <iostream>
#include <vector>

const long long MOD = 998244353;

// Function to calculate factorial modulo MOD
long long factorialModulo(long long n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = (fact * i) % MOD;
    }
    return fact;
}

// Function to calculate modular inverse of a modulo MOD
long long modularInverse(long long a) {
    long long b = MOD;
    long long x = 0, y = 1;

    while (a > 0) {
        long long q = b / a;
        long long tmp = a;
        a = b - q * a;
        b = tmp;

        tmp = x;
        x = y - q * x;
        y = tmp;
    }

    return (y + MOD) % MOD;
}

int main() {
    long long N, A, B, K;
    std::cin >> N >> A >> B >> K;

    long long ans = 0;

    for (int i = 0; i <= N; i++) {
        long long redLayers = i;
        long long greenLayers = (K - (A * redLayers)) / B;

        if (greenLayers < 0 || (K - (A * redLayers)) % B != 0 || greenLayers > N) {
            continue;
        }

        long long blueLayers = N - redLayers - greenLayers;

        long long redChoices = factorialModulo(N) * modularInverse(factorialModulo(redLayers)) % MOD * modularInverse(factorialModulo(N - redLayers)) % MOD;
        long long greenChoices = factorialModulo(N - redLayers) * modularInverse(factorialModulo(greenLayers)) % MOD * modularInverse(factorialModulo(N - redLayers - greenLayers)) % MOD;
        long long blueChoices = factorialModulo(N - redLayers - greenLayers);

        ans = (ans + redChoices * greenChoices % MOD * blueChoices % MOD) % MOD;
    }

    std::cout << ans << std::endl;

    return 0;
}