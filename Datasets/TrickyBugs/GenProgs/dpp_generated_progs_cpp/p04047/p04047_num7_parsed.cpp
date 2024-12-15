#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> L(2*N);
    for (int i = 0; i < 2*N; i++) {
        std::cin >> L[i];
    }

    std::sort(L.begin(), L.end());

    int maxIngredients = 0;
    for (int i = 0; i < 2*N; i += 2) {
        maxIngredients += L[i];
    }

    std::cout << maxIngredients << std::endl;

    return 0;
}