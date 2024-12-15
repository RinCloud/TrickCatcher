#include <iostream>
#include <algorithm>
#include <string>

std::string addZeros(std::string num, int numZeros) {
    std::string zeros(numZeros, '0');
    return zeros + num;
}

std::string calculateResult(std::string takahashi, std::string aoki) {
    std::string result;
    int len = std::max(takahashi.length(), aoki.length());

    takahashi = addZeros(takahashi, len - takahashi.length());
    aoki = addZeros(aoki, len - aoki.length());

    for (int i = 0; i < len; i++) {
        if (takahashi[i] == '1' && aoki[i] == '1') {
            result += '1';
        } else {
            result += '0';
        }
    }

    return result;
}

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;

    std::string takahashi, aoki;
    std::cin >> takahashi >> aoki;

    for (int i = 0; i < k; i++) {
        std::string result = calculateResult(takahashi, aoki);
        takahashi = addZeros(result, n - result.length());
        aoki = addZeros(result, m - result.length());
    }

    std::cout << takahashi << std::endl;
    std::cout << aoki << std::endl;

    return 0;
}