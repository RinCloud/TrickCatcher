#include <iostream>
#include <algorithm>
#include <vector>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> divisors;

    for (int i = 1; i * i <= M; i++) {
        if (M % i == 0) {
            divisors.push_back(i);

            if (i != M / i) {
                divisors.push_back(M / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end(), std::greater<int>());

    for (int i = 0; i < divisors.size(); i++) {
        if (divisors[i] <= M / N) {
            std::cout << divisors[i] << std::endl;
            break;
        }
    }

    return 0;
}