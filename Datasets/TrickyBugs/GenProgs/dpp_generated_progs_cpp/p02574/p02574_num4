#include <iostream>
#include <vector>
#include <algorithm>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

bool pairwiseCoprime(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (gcd(arr[i], arr[j]) != 1) {
                return false;
            }
        }
    }
    return true;
}

bool setwiseCoprime(std::vector<int>& arr) {
    int n = arr.size();
    int gcdVal = arr[0];
    for (int i = 1; i < n; i++) {
        gcdVal = gcd(gcdVal, arr[i]);
    }
    return gcdVal == 1;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    bool isPairwiseCoprime = pairwiseCoprime(arr);
    bool isSetwiseCoprime = setwiseCoprime(arr);

    if (isPairwiseCoprime) {
        std::cout << "pairwise coprime" << std::endl;
    } else if (isSetwiseCoprime) {
        std::cout << "setwise coprime" << std::endl;
    } else {
        std::cout << "not coprime" << std::endl;
    }

    return 0;
}