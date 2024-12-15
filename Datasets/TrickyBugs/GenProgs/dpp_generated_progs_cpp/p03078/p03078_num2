#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int X, Y, Z, K;
    std::cin >> X >> Y >> Z >> K;

    std::vector<long long> A(X), B(Y), C(Z);
    for (int i = 0; i < X; i++) {
        std::cin >> A[i];
    }
    for (int i = 0; i < Y; i++) {
        std::cin >> B[i];
    }
    for (int i = 0; i < Z; i++) {
        std::cin >> C[i];
    }

    std::vector<long long> AB;
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            AB.push_back(A[i] + B[j]);
        }
    }
    std::sort(AB.rbegin(), AB.rend());

    std::vector<long long> ABC;
    for (int i = 0; i < std::min(K, X * Y); i++) {
        for (int j = 0; j < Z; j++) {
            ABC.push_back(AB[i] + C[j]);
        }
    }
    std::sort(ABC.rbegin(), ABC.rend());

    for (int i = 0; i < K; i++) {
        std::cout << ABC[i] << std::endl;
    }

    return 0;
}