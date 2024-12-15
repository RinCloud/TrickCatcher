#include <iostream>
#include <vector>

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;

    std::vector<int> monsters(N);
    for (int i = 0; i < N; i++) {
        std::cin >> monsters[i];
    }

    int explosions = 0;
    for (int i = 0; i < N; i++) {
        int remainingExplosions = (monsters[i] - 1) / A;
        if (monsters[i] - (remainingExplosions * A) > 0) {
            monsters[i] -= remainingExplosions * A;
            explosions += remainingExplosions;
        }
        
        int remainingDamage = monsters[i] % (A + B);
        if (remainingDamage == 0) {
            explosions += monsters[i] / (A + B);
        } else {
            explosions += monsters[i] / (A + B) + 1;
        }
    }

    std::cout << explosions << std::endl;

    return 0;
}