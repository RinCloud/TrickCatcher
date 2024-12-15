#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> monsterHealth(N);
    for (int i = 0; i < N; i++) {
        std::cin >> monsterHealth[i];
    }

    int minFinalHealth = monsterHealth[0];
    for (int i = 1; i < N; i++) {
        minFinalHealth = std::min(minFinalHealth, monsterHealth[i]);
    }

    std::cout << minFinalHealth << std::endl;

    return 0;
}