#include <iostream>
#include <vector>
#include <algorithm>

struct Ant {
    int position;
    int direction;
};

bool compareAnts(Ant ant1, Ant ant2) {
    return ant1.position < ant2.position;
}

int main() {
    int N, L, T;
    std::cin >> N >> L >> T;
    
    std::vector<Ant> ants(N);
    for (int i = 0; i < N; i++) {
        std::cin >> ants[i].position >> ants[i].direction;
    }
    
    std::sort(ants.begin(), ants.end(), compareAnts);
    
    std::vector<int> newPositions(N);
    for (int i = 0; i < N; i++) {
        newPositions[i] = ants[i].position + (ants[i].direction == 1 ? T : -T);
        newPositions[i] = (newPositions[i] + L) % L;  // wrap around if necessary
    }
    
    std::vector<int> finalPositions(N);
    for (int i = 0; i < N; i++) {
        finalPositions[i] = newPositions[i];
    }
    
    std::sort(finalPositions.begin(), finalPositions.end());
    
    for (int i = 0; i < N; i++) {
        std::cout << finalPositions[i] << std::endl;
    }
    
    return 0;
}