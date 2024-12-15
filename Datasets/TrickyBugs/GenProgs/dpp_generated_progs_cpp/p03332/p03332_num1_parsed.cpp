#include <iostream>
#include <cmath>
#include <vector>

const unsigned long long MOD = 998244353;

unsigned long long power(unsigned long long a, unsigned long long b) {
    unsigned long long res = 1;
    while (b > 0) {
        if (b % 2 != 0) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
}

unsigned long long inverse(unsigned long long x) {
    return power(x, MOD - 2);
}

unsigned long long calculate_ways(unsigned long long n, unsigned long long a, unsigned long long b, unsigned long long k) {
    unsigned long long ans = 0;
    for (int red = 0; red <= n; red++) {
        unsigned long long red_score = red * a;
        if (red_score > k) {
            break;
        }
        for (int green = 0; green <= n - red; green++) {
            unsigned long long green_score = green * (a + b);
            if (red_score + green_score > k) {
                break;
            }
            unsigned long long blue = n - red - green;
            unsigned long long blue_score = blue * b;
            unsigned long long total_score = red_score + green_score + blue_score;
            if (total_score == k) {
                unsigned long long red_ways = (power(a, red) * inverse(power(a + b, green))) % MOD;
                unsigned long long green_ways = (power(a + b, green) * inverse(power(b, blue))) % MOD;
                unsigned long long ways = (red_ways * green_ways) % MOD;
                ans = (ans + ways) % MOD;
            }
        }
    }
    return ans;
}

int main() {
    unsigned long long n, a, b, k;
    std::cin >> n >> a >> b >> k;
    unsigned long long ways = calculate_ways(n, a, b, k);
    std::cout << ways << std::endl;
    return 0;
}