#include <iostream>
#include <vector>

struct Ant {
    int position;
    int direction;
};

int main() {
    int N, L, T;
    std::cin >> N >> L >> T;

    std::vector<Ant> ants(N);
    for (int i = 0; i < N; i++) {
        std::cin >> ants[i].position >> ants[i].direction;
    }

    // Move each ant according to its direction and calculate new positions
    for (int i = 0; i < N; i++) {
        if (ants[i].direction == 1) {
            ants[i].position = (ants[i].position + T) % L;
        } else {
            ants[i].position = (ants[i].position - T + L) % L;
        }
    }

    // Print the final positions
    for (int i = 0; i < N; i++) {
        std::cout << ants[i].position << std::endl;
    }

    return 0;
}