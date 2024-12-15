#include<iostream>
#define N 32768

long a[N], b[N], c[N]{}; // Initialize c[] as zero using {}.

int main() {
    long n, k;
    std::cin >> n >> k;

    for (int i = N - 1; i >= 1; --i) {
        a[i] = i < n ? i : n;
        b[i] = n / i;
    }

    while (--k) {
        for (int i = N - 1; i >= 1; --i) {
            c[i] = c[i + 1] + b[i];
        }

        for (int i = N - 1; i >= 1; --i) {
            b[i] = (b[i + 1] + a[i] * (n / i - n / (i + 1))) % 1000000007; 
        }
    }

    std::cout << b[1];
    
    return 0;
}
